#ifndef WORLDMAP_H
#define WORLDMAP_H

#include <vector>
#include "Continentmap.h"
#include "SFMLUtilities.h"

// Classe qui contient les fonctions pour afficher la carte du monde et les continents
class WorldMap {
private:
    std::vector<ContinentMap*> continents;
    sf::Texture worldMapTexture;
    sf::Sprite worldMapSprite;

public:
    WorldMap() {
        SFMLUtilities sfmlUtilities;
        continents = {};
        sfmlUtilities.loadTexture(worldMapTexture, "img/worldmap.png");
        worldMapSprite.setTexture(worldMapTexture);
    }


    // Affiche la carte du monde 
    void display(SFMLUtilities& sfmlUtilities, float x, float y) const {
        sfmlUtilities.drawContinentRectangles();
        sfmlUtilities.drawSprite(worldMapSprite);
    }

    // Ajouter un continent à la carte du monde
    void addContinent(ContinentMap* continent) {
        continents.push_back(continent);
    }

    // Affiche les continents
    void displaySelected(SFMLUtilities& sfmlUtilities, float x, float y, int z) {
        if (continents.size() != 0) {
            continents[z]->display(sfmlUtilities, x, y);
        }
    }

    // Affiche les pays
    void displaySelectedCountries(SFMLUtilities& sfmlUtilities, float x, float y, int z1, int z2) {
        if (continents.size() != 0) {
            continents[z1]->draw(sfmlUtilities, x, y, z2);
        }
    }

    ~WorldMap() = default;
};

#endif