
template <typename Resource, typename Identifier>
void ResourceHolder<Resource, Identifier>::load(Identifier id, const std::string& filename) {
    // Creation et chargement des ressources
    std::unique_ptr<Resource> resource(new Resource);

    // Testeer si on a reussi a chargé
    if (! resource->loadFromFile(filename)) {
        throw std::runtime_error("ResourceHolder::load - failed to load " + filename);
    }

    // 
    insertResource(id, std::move(resource));
}

template <typename Resource, typename Identifier>
template <typename Parameter>
void ResourceHolder<Resource, Identifier>::load(Identifier id, const std::string& filename, const Parameter& secondParam) {
    // create and load resource
    std::unique_ptr<Resource> resource(new Resource);
    
    if (!resource->loadFromFile(filename, secondParam))
        throw std::runtime_error("RessourceHolder::load - failed to load " + filename);
    
    // ajout du resource
    insertResource(id, std::move(resource));
}

template <typename Resource, typename Identifier>
Resource& ResourceHolder<Resource, Identifier>::get(Identifier id) {
    auto found = mResourceMap.find(id);
    assert( found != mResourceMap.end() );

    return *found->second;
}

template <typename Resource, typename Identifier>
void ResourceHolder<Resource, identifier>::insertResource(Identifier id, std::unique_ptr<Resource> resource) {
    // Inserer et tester le success de l insertion
    auto inserted = mResourceMap.insert(std::make_pair(id, std::move(resource)));
    assert(inserted.second);
}