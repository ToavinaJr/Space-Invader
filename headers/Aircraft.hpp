#pragma once

#include <SFML/Graphics.hpp>
#include "Entity.hpp"

class Aircraft : public Entity {
    public :
        enum Type {
            EAGLE,
            RAPTOR
        };

        explicit Aircraft(Type type);

    private:
        Type mType;
};