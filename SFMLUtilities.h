#ifndef SFMLUTILITIES_H
#define SFMLUTILITIES_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace std;

class SFMLUtilities {
private:
    sf::RenderWindow window;
    // Ces rectangles sont utilisés pour identifier les pays/continentssur lesquels le joueur clique
    // Les pays/continents sont identifiés grace aux limites des rectangles
    // basé sur le marqueur qui est affiché sur la carte
    vector<sf::RectangleShape> continentRects;
    vector<sf::RectangleShape> northAmericaRects;
    vector<sf::RectangleShape> southAmericaRects;
    vector<sf::RectangleShape> oceaniaRects;
    vector<sf::RectangleShape> africaRects;
    vector<sf::RectangleShape> asiaRects;
    vector<sf::RectangleShape> europeRects;


public:
    SFMLUtilities() : window(sf::VideoMode(1280, 720), "OlympAtlas") {

    }

    // Dessine les rectangles des continents
    void drawContinentRectangles() {
        for (auto& continentRect : continentRects) {
            window.draw(continentRect);
        }
    }

    void drawNorthAmericaRects() {
        for (auto& northAmericaRect : northAmericaRects) {
            window.draw(northAmericaRect);
        }
    }

    void drawSouthAmericaRects() {
        for (auto& southAmericaRect : southAmericaRects) {
            window.draw(southAmericaRect);
        }
    }

    void drawOceaniaRects() {
        for (auto& oceaniaRect : oceaniaRects) {
            window.draw(oceaniaRect);
        }
    }

    void drawAsiaRects() {
        for (auto& asiaRect : asiaRects) {
            window.draw(asiaRect);
        }
    }

    void drawAfricaRects() {
        for (auto& africaRect : africaRects) {
            window.draw(africaRect);
        }
    }

    void drawEuropeRects() {
        for (auto& europeRect : europeRects) {
            window.draw(europeRect);
        }
    }

    // Paramètres pour les rectangles des continents
    void setContinentRectangles() {
        // Asie
        sf::RectangleShape rectangle;
        rectangle.setSize(sf::Vector2f(40, 75));
        rectangle.setPosition(856, 170);
        rectangle.setFillColor(sf::Color::Blue);
        continentRects.push_back(rectangle);

        // Europe
        rectangle.setSize(sf::Vector2f(34, 60));
        rectangle.setPosition(625, 185);
        rectangle.setFillColor(sf::Color::Blue);
        continentRects.push_back(rectangle);

        // Afrique
        rectangle.setSize(sf::Vector2f(40, 70));
        rectangle.setPosition(610, 330);
        rectangle.setFillColor(sf::Color::Blue);
        continentRects.push_back(rectangle);

        // Amerique du Nord
        rectangle.setSize(sf::Vector2f(34, 68));
        rectangle.setPosition(240, 185);
        rectangle.setFillColor(sf::Color::Blue);
        continentRects.push_back(rectangle);

        // Amerique du Sud
        rectangle.setSize(sf::Vector2f(40, 80));
        rectangle.setPosition(385, 435);
        rectangle.setFillColor(sf::Color::Blue);
        continentRects.push_back(rectangle);

        // Oceanie
        rectangle.setSize(sf::Vector2f(34, 55));
        rectangle.setPosition(1000, 513);
        rectangle.setFillColor(sf::Color::Blue);
        continentRects.push_back(rectangle);
    }

    void setNorthAmericaRects() {
        //Canada
        sf::RectangleShape rectangle;
        rectangle.setSize(sf::Vector2f(60, 90));
        rectangle.setPosition(520, 250);
        rectangle.setFillColor(sf::Color::Blue);
        northAmericaRects.push_back(rectangle);

        //USA
        rectangle.setSize(sf::Vector2f(60, 100));
        rectangle.setPosition(540, 430);
        rectangle.setFillColor(sf::Color::Blue);
        northAmericaRects.push_back(rectangle);

        //Mexico
        rectangle.setSize(sf::Vector2f(50, 80));
        rectangle.setPosition(540, 560);
        rectangle.setFillColor(sf::Color::Blue);
        northAmericaRects.push_back(rectangle);

        //Guatamela
        rectangle.setSize(sf::Vector2f(30, 60));
        rectangle.setPosition(620, 600);
        rectangle.setFillColor(sf::Color::Blue);
        northAmericaRects.push_back(rectangle);

        //Costa Rica
        rectangle.setSize(sf::Vector2f(30, 50));
        rectangle.setPosition(660, 650);
        rectangle.setFillColor(sf::Color::Blue);
        northAmericaRects.push_back(rectangle);

        //Cuba
        rectangle.setSize(sf::Vector2f(35, 65));
        rectangle.setPosition(665, 550);
        rectangle.setFillColor(sf::Color::Blue);
        northAmericaRects.push_back(rectangle);

        //Jamaica
        rectangle.setSize(sf::Vector2f(20, 35));
        rectangle.setPosition(710, 610);
        rectangle.setFillColor(sf::Color::Blue);
        northAmericaRects.push_back(rectangle);

        //Dominican Republic
        rectangle.setSize(sf::Vector2f(25, 40));
        rectangle.setPosition(750, 595);
        rectangle.setFillColor(sf::Color::Blue);
        northAmericaRects.push_back(rectangle);
    }

    void setSouthAmericaRects() {
        //Colombia
        sf::RectangleShape rectangle;
        rectangle.setSize(sf::Vector2f(30, 50));
        rectangle.setPosition(490, 60);
        rectangle.setFillColor(sf::Color::Blue);
        southAmericaRects.push_back(rectangle);

        //Ecuador
        rectangle.setSize(sf::Vector2f(30, 50));
        rectangle.setPosition(440, 100);
        rectangle.setFillColor(sf::Color::Blue);
        southAmericaRects.push_back(rectangle);

        //Peru
        rectangle.setSize(sf::Vector2f(30, 40));
        rectangle.setPosition(465, 180);
        rectangle.setFillColor(sf::Color::Blue);
        southAmericaRects.push_back(rectangle);

        //Suriname
        rectangle.setSize(sf::Vector2f(30, 50));
        rectangle.setPosition(650, 50);
        rectangle.setFillColor(sf::Color::Blue);
        southAmericaRects.push_back(rectangle);

        //Brazil
        rectangle.setSize(sf::Vector2f(35, 60));
        rectangle.setPosition(685, 180);
        rectangle.setFillColor(sf::Color::Blue);
        southAmericaRects.push_back(rectangle);

        //Bolivia
        rectangle.setSize(sf::Vector2f(30, 50));
        rectangle.setPosition(570, 250);
        rectangle.setFillColor(sf::Color::Blue);
        southAmericaRects.push_back(rectangle);

        //Uruguay
        rectangle.setSize(sf::Vector2f(30, 50));
        rectangle.setPosition(645, 400);
        rectangle.setFillColor(sf::Color::Blue);
        southAmericaRects.push_back(rectangle);

        //Argentina
        rectangle.setSize(sf::Vector2f(35, 60));
        rectangle.setPosition(555, 420);
        rectangle.setFillColor(sf::Color::Blue);
        southAmericaRects.push_back(rectangle);

    }

    void setOceaniaRects() {
        //Australia
        sf::RectangleShape rectangle;
        rectangle.setSize(sf::Vector2f(37, 60));
        rectangle.setPosition(665, 350);
        rectangle.setFillColor(sf::Color::Blue);
        oceaniaRects.push_back(rectangle);

        //Fiji
        rectangle.setSize(sf::Vector2f(27, 45));
        rectangle.setPosition(1020, 212);
        rectangle.setFillColor(sf::Color::Blue);
        oceaniaRects.push_back(rectangle);

        //New Zealand
        rectangle.setSize(sf::Vector2f(35, 65));
        rectangle.setPosition(1082, 542);
        rectangle.setFillColor(sf::Color::Blue);
        oceaniaRects.push_back(rectangle);
    }

    void setAsiaRects() {
        //Israel/Palestine
        sf::RectangleShape rectangle;
        rectangle.setSize(sf::Vector2f(15, 30));
        rectangle.setPosition(300, 420);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //Saudi Arabia
        rectangle.setSize(sf::Vector2f(25, 40));
        rectangle.setPosition(340, 450);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //Qatar
        rectangle.setSize(sf::Vector2f(15, 25));
        rectangle.setPosition(385, 460);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //UAE
        rectangle.setSize(sf::Vector2f(15, 25));
        rectangle.setPosition(405, 463);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //Iran
        rectangle.setSize(sf::Vector2f(25, 50));
        rectangle.setPosition(403, 400);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //kazakhstan
        rectangle.setSize(sf::Vector2f(25, 40));
        rectangle.setPosition(470, 300);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //pakistan
        rectangle.setSize(sf::Vector2f(25, 40));
        rectangle.setPosition(480, 410);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //india
        rectangle.setSize(sf::Vector2f(25, 40));
        rectangle.setPosition(528, 460);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //china
        rectangle.setSize(sf::Vector2f(30, 50));
        rectangle.setPosition(645, 387);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //vietnam
        rectangle.setSize(sf::Vector2f(25, 40));
        rectangle.setPosition(688, 515);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //taiwan
        rectangle.setSize(sf::Vector2f(15, 25));
        rectangle.setPosition(758, 467);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //philippines
        rectangle.setSize(sf::Vector2f(25, 42));
        rectangle.setPosition(768, 515);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //north korea
        rectangle.setSize(sf::Vector2f(25, 42));
        rectangle.setPosition(782, 340);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //south korea
        rectangle.setSize(sf::Vector2f(25, 42));
        rectangle.setPosition(784, 382);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);

        //japan
        rectangle.setSize(sf::Vector2f(20, 40));
        rectangle.setPosition(860, 360);
        rectangle.setFillColor(sf::Color::Blue);
        asiaRects.push_back(rectangle);


    }

    void setAfricaRects() {
        //Gambia
        sf::RectangleShape rectangle;
        rectangle.setSize(sf::Vector2f(20, 40));
        rectangle.setPosition(360, 210);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //Senegal
        rectangle.setSize(sf::Vector2f(27, 47));
        rectangle.setPosition(387, 200);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //morocco
        rectangle.setSize(sf::Vector2f(27, 47));
        rectangle.setPosition(440, 30);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //burkina faso
        rectangle.setSize(sf::Vector2f(27, 47));
        rectangle.setPosition(482, 220);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //algeria
        rectangle.setSize(sf::Vector2f(27, 47));
        rectangle.setPosition(520, 77);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //nigeria
        rectangle.setSize(sf::Vector2f(27, 45));
        rectangle.setPosition(570, 245);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //tunisia
        rectangle.setSize(sf::Vector2f(23, 40));
        rectangle.setPosition(580, 30);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //cameroon
        rectangle.setSize(sf::Vector2f(27, 45));
        rectangle.setPosition(606, 282);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //south africa
        rectangle.setSize(sf::Vector2f(27, 40));
        rectangle.setPosition(712, 597);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //zimbabwe
        rectangle.setSize(sf::Vector2f(27, 40));
        rectangle.setPosition(760, 505);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //egypt 
        rectangle.setSize(sf::Vector2f(27, 47));
        rectangle.setPosition(755, 95);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //uganda 
        rectangle.setSize(sf::Vector2f(20, 35));
        rectangle.setPosition(775, 327);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //tanzania 
        rectangle.setSize(sf::Vector2f(20, 35));
        rectangle.setPosition(795, 391);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //kenya 
        rectangle.setSize(sf::Vector2f(20, 35));
        rectangle.setPosition(827, 340);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //ethiopia 
        rectangle.setSize(sf::Vector2f(27, 47));
        rectangle.setPosition(838, 250);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);

        //dijbouti 
        rectangle.setSize(sf::Vector2f(20, 40));
        rectangle.setPosition(868, 233);
        rectangle.setFillColor(sf::Color::Blue);
        africaRects.push_back(rectangle);
    }

    void setEuropeRects() {
        //Portugal
        sf::RectangleShape rectangle;
        rectangle.setSize(sf::Vector2f(25, 47));
        rectangle.setPosition(393, 525);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //ireland
        rectangle.setSize(sf::Vector2f(25, 47));
        rectangle.setPosition(393, 325);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //spain
        rectangle.setSize(sf::Vector2f(25, 50));
        rectangle.setPosition(445, 510);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //england
        rectangle.setSize(sf::Vector2f(25, 40));
        rectangle.setPosition(460, 315);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //france
        rectangle.setSize(sf::Vector2f(25, 50));
        rectangle.setPosition(510, 420);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //netherlands
        rectangle.setSize(sf::Vector2f(20, 40));
        rectangle.setPosition(547, 320);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //belgium
        rectangle.setSize(sf::Vector2f(20, 40));
        rectangle.setPosition(547, 370);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //switzerland
        rectangle.setSize(sf::Vector2f(20, 40));
        rectangle.setPosition(575, 420);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //germany
        rectangle.setSize(sf::Vector2f(27, 45));
        rectangle.setPosition(590, 350);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //denmark
        rectangle.setSize(sf::Vector2f(24, 40));
        rectangle.setPosition(595, 280);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //norway
        rectangle.setSize(sf::Vector2f(24, 40));
        rectangle.setPosition(594, 180);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //austria
        rectangle.setSize(sf::Vector2f(20, 37));
        rectangle.setPosition(615, 420);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //italy
        rectangle.setSize(sf::Vector2f(24, 45));
        rectangle.setPosition(607, 468);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //slovenia
        rectangle.setSize(sf::Vector2f(17, 28));
        rectangle.setPosition(647, 442);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //czech republic
        rectangle.setSize(sf::Vector2f(20, 33));
        rectangle.setPosition(650, 377);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //croatia
        rectangle.setSize(sf::Vector2f(17, 28));
        rectangle.setPosition(685, 442);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //bosnia
        rectangle.setSize(sf::Vector2f(17, 28));
        rectangle.setPosition(685, 480);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //slovakia
        rectangle.setSize(sf::Vector2f(19, 33));
        rectangle.setPosition(693, 400);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //serbia
        rectangle.setSize(sf::Vector2f(17, 28));
        rectangle.setPosition(715, 470);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //hungary
        rectangle.setSize(sf::Vector2f(22, 37));
        rectangle.setPosition(728, 403);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //poland
        rectangle.setSize(sf::Vector2f(25, 42));
        rectangle.setPosition(693, 338);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //romania
        rectangle.setSize(sf::Vector2f(24, 42));
        rectangle.setPosition(765, 430);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //ukraine
        rectangle.setSize(sf::Vector2f(29, 50));
        rectangle.setPosition(830, 379);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //bulgaria
        rectangle.setSize(sf::Vector2f(24, 42));
        rectangle.setPosition(765, 485);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //greece
        rectangle.setSize(sf::Vector2f(17, 37));
        rectangle.setPosition(735, 540);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //turkey
        rectangle.setSize(sf::Vector2f(26, 46));
        rectangle.setPosition(873, 525);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //lithuania
        rectangle.setSize(sf::Vector2f(24, 42));
        rectangle.setPosition(755, 290);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //estonia
        rectangle.setSize(sf::Vector2f(24, 42));
        rectangle.setPosition(772, 237);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //finland
        rectangle.setSize(sf::Vector2f(24, 42));
        rectangle.setPosition(783, 113);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);

        //sweden
        rectangle.setSize(sf::Vector2f(24, 42));
        rectangle.setPosition(660, 163);
        rectangle.setFillColor(sf::Color::Blue);
        europeRects.push_back(rectangle);
    }

    // Charge les textures et affiche les sprites
    void loadTexture(sf::Texture& texture, const std::string& filePath) {
        if (!texture.loadFromFile(filePath)) {
            // erreur
        }
    }

    void drawSprite(const sf::Sprite& sprite) {
        window.clear();
        window.draw(sprite);
    }

    void drawInfoBackground() {
        sf::Texture infoTexture;
        sf::Sprite infoBackgroundSprite;
        infoTexture.loadFromFile("img/2.png");
        infoBackgroundSprite.setTexture(infoTexture);
        window.draw(infoBackgroundSprite);
    }

    void drawFlagSprite(const sf::Sprite& sprite) {
        window.draw(sprite);
    }

    // Charge les polices et affiche le texte
    void loadFont(sf::Font& font, const std::string& filePath) {
        if (!font.loadFromFile(filePath)) {
            // erreur
        }
    }

    void drawText(const std::string& text, float x, float y, int fontSize = 30, const sf::Color& color = sf::Color::White) {
        sf::Font font;
        loadFont(font, "fonts/Poppins-Medium.ttf");

        sf::Text sfmlText;
        sfmlText.setFont(font);
        sfmlText.setString(text);
        sfmlText.setCharacterSize(fontSize);
        sfmlText.setFillColor(color);
        sfmlText.setPosition(x, y);

        window.draw(sfmlText);
    }

    // Gestion des entrées
    void handleInput(int& mouseclick, int& selectedContinentIndex, bool& continent, int& selectedCountryIndex) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return;  // Quitter la fonction si la fenêtre est fermée
            }
            else if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
                if (!continent) {
                    sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                    // Verifie si le clic de la souris est à l'intérieur de l'un des rectangles
                    for (u_int i = 0; i < continentRects.size(); ++i) {
                        sf::FloatRect rectBounds = continentRects[i].getGlobalBounds();
                        if (rectBounds.contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y))) {
                            mouseclick += 1;
                            selectedContinentIndex = i;
                            return;
                        }
                    }
                }
                else {
                    if (selectedContinentIndex == 0) {
                        sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                        for (u_int i = 0; i < asiaRects.size(); ++i) {
                            sf::FloatRect rectBounds = asiaRects[i].getGlobalBounds();
                            if (rectBounds.contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y))) {
                                mouseclick += 1;
                                selectedCountryIndex = i;
                                return;
                            }
                        }
                    }
                    else if (selectedContinentIndex == 1) {
                        sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                        for (u_int i = 0; i < europeRects.size(); ++i) {
                            sf::FloatRect rectBounds = europeRects[i].getGlobalBounds();
                            if (rectBounds.contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y))) {
                                mouseclick += 1;
                                selectedCountryIndex = i;
                                return;
                            }
                        }
                    }
                    else if (selectedContinentIndex == 2) {
                        sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                        for (u_int i = 0; i < africaRects.size(); ++i) {
                            sf::FloatRect rectBounds = africaRects[i].getGlobalBounds();
                            if (rectBounds.contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y))) {
                                mouseclick += 1;
                                selectedCountryIndex = i;
                                return;
                            }
                        }
                    }
                    else if (selectedContinentIndex == 3) {
                        sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                        for (u_int i = 0; i < northAmericaRects.size(); ++i) {
                            sf::FloatRect rectBounds = northAmericaRects[i].getGlobalBounds();
                            if (rectBounds.contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y))) {
                                mouseclick += 1;
                                selectedCountryIndex = i;
                                return;
                            }
                        }
                    }
                    else if (selectedContinentIndex == 4) {
                        sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                        for (u_int i = 0; i < southAmericaRects.size(); ++i) {
                            sf::FloatRect rectBounds = southAmericaRects[i].getGlobalBounds();
                            if (rectBounds.contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y))) {
                                mouseclick += 1;
                                selectedCountryIndex = i;
                                return;
                            }
                        }
                    }
                    else if (selectedContinentIndex == 5) {
                        sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                        for (u_int i = 0; i < oceaniaRects.size(); ++i) {
                            sf::FloatRect rectBounds = oceaniaRects[i].getGlobalBounds();
                            if (rectBounds.contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y))) {
                                mouseclick += 1;
                                selectedCountryIndex = i;
                                return;
                            }
                        }
                    }
                    else {
                        return;
                    }
                }
            }
            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                mouseclick = 0;
                continent = false;
            }
        }
    }

    void handleMenuInput(int& mouseclick) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return; 
            }
            else if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
                mouseclick += 1;
            }
            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S) {
                mouseclick += 1;
            }
            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::E) {
                window.close();
            }
        }
    }

    // Fonction pour afficher le menu
    sf::RenderWindow& getWindow() {
        return window;
    }

    void clear() {
        window.clear();
    }

    void display() {
        window.display();
    }


    ~SFMLUtilities() = default;
};

#endif
