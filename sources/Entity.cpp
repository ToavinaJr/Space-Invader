#include "../headers/Entity.hpp"

void Entity::setVelocity(const sf::Vector2f& vel) {
    velocity = vel;
}

void Entity::setVelocity(const float& vx, const float& vy) {
    velocity.x = vx;
    velocity.y = vy;
}

sf::Vector2f Entity::getVelocity() const {
    return velocity;
}

