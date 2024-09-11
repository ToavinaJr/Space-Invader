#ifndef RESOURCEHOLDER_HPP
#define RESOURCEHOLDER_HPP

#include <string>

template <typename Resource , typename Identifier>
class ResourceHolder{
    public:
        
        template <typename Parameter>
        void            load(Identifier id, const std::string& filename, const Parameter& secondParam);

        void            load(Identifier id, const std::string& filename);
        Resource&       get(Identifier id);
        const Resource& get(Identifier id) const;
    
    private:
        void            insertResource(Identifier id, std::unique_ptr<Resource> resource);
        std::map<Identifier, std::unique_ptr<Resource>> 
                        mResourceMap;

};

#include "ResourceHolder.inl"

#endif