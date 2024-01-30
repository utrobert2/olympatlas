#ifndef MENU_H
#define MENU_H

#include "SFMLUtilities.h"
#include "game.h"
#include "soundmanager.h"
// Classe qui gère le menu du jeu
// Quand l'application est lancée le code game prend le relais
class Menu {
private:
    sf::Sprite menuSprite;
    sf::Texture tex;

public:
    Menu(sf::String filePath) {
        tex.loadFromFile(filePath);
        menuSprite.setTexture(tex);
    }

    void run(SFMLUtilities& sfmlUtilities) {
        int mouseClick = 0;
        SoundManager menuMusic("music/msMenu.wav");
        SoundManager bgMusic("music/msOlympics.wav");
        menuMusic.setVolume(50);
        menuMusic.playSound();
        // Boucle render du menu
        while (sfmlUtilities.getWindow().isOpen()) {
            sfmlUtilities.handleMenuInput(mouseClick);
            sfmlUtilities.clear();
            if (mouseClick == 1) {
                Game g;
                g.run(sfmlUtilities, bgMusic);
                mouseClick = 0;
            }
            sfmlUtilities.drawSprite(menuSprite);

            sfmlUtilities.display();
        }
    }

    ~Menu() = default;
};

#endif
