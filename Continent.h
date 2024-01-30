#ifndef CONTINENT_H
#define CONTINENT_H

#include <vector>
#include "Country.h"
#include "SFMLUtilities.h"
using namespace std;

// Classe abstraite qui hérite de la classe ContinentMap et qui contient les fonctions virtuelles pures display et draw
// Contient l'information sur le nom du continent et les pays qui le composent
class Continent {
private:
    string name;
    vector<Country*> countries;

public:
    Continent(const string& name) : name(name) {

    }

    vector<Country*>& getCountries() {
        return countries;
    }

    string getName() const {
        return name;
    }

    // Ajouter un pays au continent
    void addCountry(Country* country) {
        countries.push_back(country);
    }

    // Fonctions virtuelles
    virtual void display(SFMLUtilities& sfmlUtilities, float x, float y) = 0;

    virtual void draw(SFMLUtilities& sfmlUtilities, float x, float y, int z) = 0;

    ~Continent() = default;
};

#endif