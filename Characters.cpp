//
// Created by jwmal on 6/30/2023.
//

#include "Characters.h"

Characters::Characters() {
    this -> shape.setFillColor(sf::Color::White);
    this -> shape.setSize(sf::Vector2f(50.f,50.f));
    this -> moveSpeed = 100.f;
}

Characters::~Characters() {

}

void Characters::moveCharacter(const float diffTime, const float x_direct, const float y_direct) {
    this -> shape.move(this-> moveSpeed * x_direct, this -> moveSpeed * y_direct);
}

void Characters::updateCharacter(const float &diffTime) {

}

void Characters::renderCharacter(sf::RenderTarget *target) {
    target -> draw(this -> shape);
}
