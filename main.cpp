#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "SFMLUtilities.h"
#include "menu.h"
#include "soundmanager.h"

int main() {
    SFMLUtilities sfmlUtilities;
    sfmlUtilities.setContinentRectangles();
    sfmlUtilities.setNorthAmericaRects();
    sfmlUtilities.setSouthAmericaRects();
    sfmlUtilities.setOceaniaRects();
    sfmlUtilities.setAsiaRects();
    sfmlUtilities.setAfricaRects();
    sfmlUtilities.setEuropeRects();

    Menu m("img/menu.png");
    m.run(sfmlUtilities);

    return 0;
}
