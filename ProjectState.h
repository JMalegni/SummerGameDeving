//
// Created by jwmal on 6/15/2023.
//
#pragma once

#include<vector>
#include<fstream>
#include<sstream>


#include <SFMl/Graphics.hpp>
#include <SFMl/Audio.hpp>
#include <SFMl/System.hpp>
#include <SFMl/Window.hpp>
#include <SFMl/Network.hpp>

// object for the various states of the project: Start menu, in game etc...
// will be inherited from for specific cases
class projectState {
    // vector of any textures that the current game state may need
    std::vector<sf::Texture> textures;


public:
    projectState();
    virtual ~projectState();

    //pure virtual functions, ensuyres that these functions must be defined in derived classes
    virtual void updateState() = 0;
    virtual void renderState() = 0;
};


