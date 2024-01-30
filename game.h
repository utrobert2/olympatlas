#ifndef GAME_H
#define GAME_H

#include "WorldMap.h"
#include "SFMLUtilities.h"
#include "soundmanager.h"

// Classe Game qui contient les fonctions pour afficher la carte du monde et les continents
// C'est le coeur de l'application
class Game {
private:
    WorldMap worldMap;

public:
    Game() {

    }

    // Cette fonction initialise la carte du monde
    void setWorld() {
        // Asie
        ContinentMap* asia = new ContinentMap("Asia", "img/asia.png");

        Country* country = new Country("Israel", "9,000,000", "20,770", 13, "img/asia/1.png");
        asia->addCountry(country);

        country = new Country("Saudi Arabia", "34,000,000", "2,149,690", 4, "img/asia/2.png");
        asia->addCountry(country);

        country = new Country("Qatar", "2,900,000", "11,586", 8, "img/asia/3.png");
        asia->addCountry(country);

        country = new Country("UAE", "9,300,000", "83,600", 2, "img/asia/4.png");
        asia->addCountry(country);

        country = new Country("Iran", "84,000,000", "1,648,195", 76, "img/asia/5.png");
        asia->addCountry(country);

        country = new Country("Kazakhstan", "18,000,000", "2,724,900", 71, "img/asia/6.png");
        asia->addCountry(country);

        country = new Country("Pakistan", "225,000,000", "881,913", 10, "img/asia/7.png");
        asia->addCountry(country);

        country = new Country("India", "1,300,000,000", "3,287,260", 35, "img/asia/8.png");
        asia->addCountry(country);

        country = new Country("China", "1,400,000,000", "9,596,960", 636, "img/asia/9.png");
        asia->addCountry(country);

        country = new Country("Vietnam", "97,000,000", "331,212", 5, "img/asia/10.png");
        asia->addCountry(country);

        country = new Country("Chinese Taipei", "23,000,000", "36,190", 36, "img/asia/11.png");
        asia->addCountry(country);

        country = new Country("Philippines", "113,000,000", "300,000", 14, "img/asia/12.png");
        asia->addCountry(country);

        country = new Country("North Korea", "25,300,000", "120,540", 55, "img/asia/13b.png");
        asia->addCountry(country);

        country = new Country("South Korea", "51,000,000", "100,210", 287, "img/asia/13.png");
        asia->addCountry(country);

        country = new Country("Japan", "126,000,000", "377,975", 439, "img/asia/14.png");
        asia->addCountry(country);

        worldMap.addContinent(asia);

        // Europe
        ContinentMap* europe = new ContinentMap("Europe", "img/europe.png");

        country = new Country("Portugal", "10,300,000", "92,090", 24, "img/europe/1.png");
        europe->addCountry(country);

        country = new Country("Ireland", "4,900,000", "70,280", 31, "img/europe/2.png");
        europe->addCountry(country);

        country = new Country("Spain", "47,000,000", "505,990", 150, "img/europe/3.png");
        europe->addCountry(country);

        country = new Country("United Kingdom", "56,000,000", "130,395", 916, "img/europe/4.png");
        europe->addCountry(country);

        country = new Country("France", "67,000,000", "551,695", 840, "img/europe/5.png");
        europe->addCountry(country);

        country = new Country("Netherlands", "17,500,000", "41,850", 287, "img/europe/6.png");
        europe->addCountry(country);

        country = new Country("Belgium", "11,500,000", "30,280", 148, "img/europe/7.png");
        europe->addCountry(country);

        country = new Country("Switzerland", "8,700,000", "41,290", 192, "img/europe/8.png");
        europe->addCountry(country);

        country = new Country("Germany", "83,000,000", "357,022", 1346, "img/europe/9.png");
        europe->addCountry(country);

        country = new Country("Denmark", "5,800,000", "42,930", 194, "img/europe/10.png");
        europe->addCountry(country);

        country = new Country("Norway", "5,400,000", "148,729", 472, "img/europe/11.png");
        europe->addCountry(country);

        country = new Country("Austria", "8,900,000", "83,879", 234, "img/europe/12.png");
        europe->addCountry(country);

        country = new Country("Italy", "60,000,000", "301,340", 696, "img/europe/13.png");
        europe->addCountry(country);

        country = new Country("Slovenia", "2,100,000", "20,270", 30, "img/europe/14.png");
        europe->addCountry(country);

        country = new Country("Czech Republic", "10,700,000", "78,870", 62, "img/europe/15.png");
        europe->addCountry(country);

        country = new Country("Croatia", "4,000,000", "56,960", 33, "img/europe/16.png");
        europe->addCountry(country);

        country = new Country("Bosnia", "3,300,000", "51,129", 0, "img/europe/17.png");
        europe->addCountry(country);

        country = new Country("Slovakia", "5,400,000", "49,035", 4, "img/europe/18.png");
        europe->addCountry(country);

        country = new Country("Serbia", "6,700,000", "77,474", 9, "img/europe/19.png");
        europe->addCountry(country);

        country = new Country("Hungary", "9,700,000", "93,030", 175, "img/europe/20.png");
        europe->addCountry(country);

        country = new Country("Poland", "38,000,000", "312,696", 70, "img/europe/21.png");
        europe->addCountry(country);

        country = new Country("Romania", "19,000,000", "238,397", 89, "img/europe/22.png");
        europe->addCountry(country);

        country = new Country("Ukraine", "41,000,000", "603,500", 36, "img/europe/23.png");
        europe->addCountry(country);

        country = new Country("Bulgaria", "6,900,000", "110,879", 52, "img/europe/24.png");
        europe->addCountry(country);

        country = new Country("Greece", "10,400,000", "131,957", 33, "img/europe/25.png");
        europe->addCountry(country);

        country = new Country("Turkey", "83,000,000", "783,356", 41, "img/europe/26.png");
        europe->addCountry(country);

        country = new Country("Lithuania", "2,800,000", "65,300", 6, "img/europe/27.png");
        europe->addCountry(country);

        country = new Country("Estonia", "1,300,000", "45,227", 2, "img/europe/28.png");
        europe->addCountry(country);

        country = new Country("Finland", "5,500,000", "338,424", 101, "img/europe/29.png");
        europe->addCountry(country);

        country = new Country("Sweden", "10,400,000", "450,295", 206, "img/europe/30.png");
        europe->addCountry(country);

        worldMap.addContinent(europe);

        // Afrique
        ContinentMap* africa = new ContinentMap("Africa", "img/africa.png");

        country = new Country("Gambia", "2,400,000", "10,689", 0, "img/africa/1.png");
        africa->addCountry(country);

        country = new Country("Senegal", "17,000,000", "196,722", 0, "img/africa/2.png");
        africa->addCountry(country);

        country = new Country("Morocco", "36,000,000", "446,550", 6, "img/africa/3.png");
        africa->addCountry(country);

        country = new Country("Burkina Faso", "21,000,000", "274,200", 0, "img/africa/4.png");
        africa->addCountry(country);

        country = new Country("Algeria", "43,000,000", "2,381,741", 17, "img/africa/5.png");
        africa->addCountry(country);

        country = new Country("Nigeria", "206,000,000", "923,768", 3, "img/africa/6.png");
        africa->addCountry(country);

        country = new Country("Tunisia", "11,800,000", "163,610", 4, "img/africa/7.png");
        africa->addCountry(country);

        country = new Country("Cameroon", "27,000,000", "475,442", 3, "img/africa/8.png");
        africa->addCountry(country);

        country = new Country("South Africa", "60,000,000", "1,219,090", 26, "img/africa/9.png");
        africa->addCountry(country);

        country = new Country("Zimbabwe", "15,000,000", "390,757", 8, "img/africa/10.png");
        africa->addCountry(country);

        country = new Country("Egypt", "100,000,000", "1,001,450", 7, "img/africa/11.png");
        africa->addCountry(country);

        country = new Country("Uganda", "45,000,000", "241,038", 2, "img/africa/12.png");
        africa->addCountry(country);

        country = new Country("Tanzania", "60,000,000", "947,303", 0, "img/africa/13.png");
        africa->addCountry(country);

        country = new Country("Kenya", "54,000,000", "580,367", 103, "img/africa/14.png");
        africa->addCountry(country);

        country = new Country("Ethiopia", "117,000,000", "1,104,300", 45, "img/africa/15.png");
        africa->addCountry(country);

        country = new Country("Djibouti", "1,000,000", "23,180", 0, "img/africa/16.png");
        africa->addCountry(country);

        worldMap.addContinent(africa);

        // Amérique du Nord
        ContinentMap* northAmerica = new ContinentMap("North America", "img/north-america.png");

        country = new Country("Canada", "38,000,000", "9,984,670", 73, "img/north-america/1.png");
        northAmerica->addCountry(country);

        country = new Country("USA", "331,000,000", "9,631,418", 1127, "img/north-america/2.png");
        northAmerica->addCountry(country);

        country = new Country("Mexico", "126,000,000", "1,964,375", 13, "img/north-america/3.png");
        northAmerica->addCountry(country);

        country = new Country("Guatemala", "18,000,000", "108,889", 0, "img/north-america/4.png");
        northAmerica->addCountry(country);

        country = new Country("Costa Rica", "5,000,000", "51,100", 1, "img/north-america/5.png");
        northAmerica->addCountry(country);

        country = new Country("Cuba", "11,000,000", "109,884", 78, "img/north-america/6.png");
        northAmerica->addCountry(country);

        country = new Country("Jamaica", "2,900,000", "10,991", 20, "img/north-america/7.png");
        northAmerica->addCountry(country);

        country = new Country("Dominican Republic", "10,800,000", "48,670", 9, "img/north-america/8.png");
        northAmerica->addCountry(country);

        worldMap.addContinent(northAmerica);

        // Amérique du Sud
        ContinentMap* southAmerica = new ContinentMap("South America", "img/south-america.png");

        country = new Country("Colombia", "51,000,000", "1,138,910", 5, "img/south-america/1.png");
        southAmerica->addCountry(country);

        country = new Country("Ecuador", "17,000,000", "276,841", 2, "img/south-america/2.png");
        southAmerica->addCountry(country);

        country = new Country("Peru", "33,000,000", "1,285,220", 1, "img/south-america/3.png");
        southAmerica->addCountry(country);

        country = new Country("Suriname", "600,000", "163,820", 1, "img/south-america/4.png");
        southAmerica->addCountry(country);

        country = new Country("Brazil", "213,000,000", "8,515,770", 30, "img/south-america/5.png");
        southAmerica->addCountry(country);

        country = new Country("Bolivia", "11,000,000", "1,098,580", 0, "img/south-america/6.png");
        southAmerica->addCountry(country);

        country = new Country("Uruguay", "3,500,000", "176,220", 2, "img/south-america/7.png");
        southAmerica->addCountry(country);

        country = new Country("Argentina", "45,000,000", "2,780,400", 21, "img/south-america/8.png");
        southAmerica->addCountry(country);

        worldMap.addContinent(southAmerica);

        // Océanie
        ContinentMap* oceania = new ContinentMap("Oceania", "img/oceania.png");

        country = new Country("Australia", "25,000,000", "7,692,024", 147, "img/oceania/1.png");
        oceania->addCountry(country);

        country = new Country("Fiji", "900,000", "18,274", 1, "img/oceania/2.png");
        oceania->addCountry(country);

        country = new Country("New Zealand", "5,000,000", "268,021", 46, "img/oceania/3.png");
        oceania->addCountry(country);

        worldMap.addContinent(oceania);

    }

    void run(SFMLUtilities& sfmlUtilities, SoundManager& bgMusic) {
        setWorld();
        int mouseclick = 0;
        int continentIndex = -1;
        int countryIndex = -1;
        bool continent = false; 

        bgMusic.setVolume(12);
        bgMusic.setLoop();
        bgMusic.playSound();

        // Boucle de render
        while (sfmlUtilities.getWindow().isOpen()) {
            sfmlUtilities.handleInput(mouseclick, continentIndex, continent, countryIndex);
            sfmlUtilities.clear();
            if (mouseclick > 2) {
                return;
            }
            else if (mouseclick == 2) {
                continent = false;
                worldMap.displaySelectedCountries(sfmlUtilities, 200.0f, 400.0f, continentIndex, countryIndex);
            }
            else if (mouseclick == 1) {
                worldMap.displaySelected(sfmlUtilities, 10.0f, 10.0f, continentIndex);
                continent = true;
            }
            else {
                worldMap.display(sfmlUtilities, 10.0f, 10.0f);
            }

            sfmlUtilities.display();
        }
    }

    ~Game() = default;
};

#endif
