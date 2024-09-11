#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Window/Keyboard.hpp>

#include <sstream>
#include <string>

class Animation;

// Implementing our own toString because std::to_string doesn't work with MinGW
template <typename T>
std::string         toString(const T& value) ;

// Implementing our own toString with SFML key because std::to_string doesn't work with MinGW
std::string         toString(sf::Keyboard::Key value) ;

void                centerOrigin(sf::Sprite& sprite);
void                centerOrigin(sf::Text& text);
void                centerOrigin(Animation& animation);

// Function for angle conversion
float               radianToDegree(float radian);
float               degreeToRadian(float degree);

// Random integer number generator
int                 randomInt(int exclusiveMax);

float               length(sf::Vector2f vec);
sf::Vector2f        unitVector(sf::Vector2f vec);

#include "Utility.inl"
#endif