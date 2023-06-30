//
// Created by jwmal on 6/30/2023.
//

#pragma once

#include <iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<stack>
#include<map>

#include <SFMl/Graphics.hpp>
#include <SFMl/Audio.hpp>
#include <SFMl/System.hpp>
#include <SFMl/Window.hpp>
#include <SFMl/Network.hpp>

class Characters {

public:
    Characters();
    virtual ~Characters();

    sf::RectangleShape shape;
    float moveSpeed;

    virtual void updateCharacter(const float &diffTime);
    virtual void renderCharacter(sf::RenderTarget *target);

    virtual void moveCharacter(const float diffTime, const float x_direct, const float y_direct);
};


