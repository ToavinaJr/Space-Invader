#pragma once

#include <SFML/Graphics.hpp>

class Entity {
    public  :
        void setVelocity(const sf::Vector2f& vel);
        void setVelocity(const float& vx, const float& vy);

        sf::Vector2f getVelocity() const;
    private :
        sf::Vector2f velocity;
};