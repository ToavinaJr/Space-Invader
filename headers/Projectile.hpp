#ifndef PROJECTILE_HPP
#define PROJECTILE_HPP

#include "Entity.hpp"
#include "ResourceIdentifiers.hpp"

#include <SFML/Graphics/Sprite.hpp>

class Projectile : public Entity {
    public:
        enum Type {
            AlliedBullet,
            EnemyBullet,
            Missile,
            TypeCount
        };

        Projectile(Type tytpe, const TextureHolder& textures);
        void guuideTowards(sf::Vector2f position);
        bool isGuided() const;

        virtual unsigned int getCategory()const;
        virtual sf::FloatRect getBoundingRect()const;

        float getmaxSpeed()const;
        int getdamage()const;
    
    private:
        // virtual void updateCurrent(sf::Time dt, CommandQueue& comamands);
        virtual void drawCurrent(sf::RenderTarget& target, sf::RenderStates states)const;

        Type            mType;
        sf::Sprite      mSprite;
        sf::Vector2f    mtargetDirection;

};

#endif