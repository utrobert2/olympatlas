#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <string>
#include "SFMLUtilities.h"
using namespace std;

//country class to store country information
//used in continent class 
class Country {
private:
    string name;
    string population;
    string area;
    int olympicMedalsWon;
    int firstParticipation;
    sf::Texture flagTexture;
    sf::Sprite flagSprite;

public:
    Country(const string& countryName, string countryPopulation, string countryArea, int medalsWon, int firstPart, string path) {
        name = countryName;
        population = countryPopulation;
        area = countryArea;
        olympicMedalsWon = medalsWon;
        firstParticipation = firstPart;
        flagTexture.loadFromFile(path);
        flagSprite.setTexture(flagTexture);
        flagSprite.setScale(2, 2);
        flagSprite.setPosition(490, 180);
    }

    //getter functions
    string getName() const {
        return name;
    }

    string getPopulation() const {
        return population;
    }

    string getArea() const {
        return area;
    }

    //display information about the country
    void draw(SFMLUtilities& sfmlUtilities, float x, float y) {
        sfmlUtilities.drawInfoBackground();
        sfmlUtilities.drawFlagSprite(flagSprite);
        sfmlUtilities.drawText("\t\t\t\t\t\t\t\t\tCountry: " + name + "\n\t\t\t\t\t\t\t\t\tPopulation: " + population +
            "\n\t\t\t\t\t\t\t\t\tArea: " + area + " sq km " + "\n\t\t\t\t\t\t\t\t\tOlympic Medals Won: " + std::to_string(olympicMedalsWon) + 
            "\n\t\t\t\t\t\t\t\t\tFirst participation: " + std::to_string(firstParticipation), x, y);
    }

    ~Country() = default;
};

#endif