#ifndef CONTINENTMAP_H
#define CONTINENTMAP_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Continent.h"
using namespace std;

class ContinentMap : public Continent {
private:
    sf::Texture mapTexture;
    sf::Sprite mapSprite;

public:
    ContinentMap(string name, string filepath) : Continent(name) {
        SFMLUtilities sfmlUtilities;
        mapTexture.loadFromFile(filepath);
        mapSprite.setTexture(mapTexture);
    }

    // afficher la carte du continent 
    void display(SFMLUtilities& sfmlUtilities, float x, float y) {
        sfmlUtilities.drawNorthAmericaRects();
        sfmlUtilities.drawSouthAmericaRects();
        sfmlUtilities.drawOceaniaRects();
        sfmlUtilities.drawAsiaRects();
        sfmlUtilities.drawAfricaRects();
        sfmlUtilities.drawEuropeRects();
        sfmlUtilities.drawSprite(mapSprite);
    }

    //display country information
    void draw(SFMLUtilities& sfmlUtilities, float x, float y, int z) {
        vector<Country*> countries = getCountries();
        countries[z]->draw(sfmlUtilities, x, y);
    }

    ~ContinentMap() = default;
};

#endif
