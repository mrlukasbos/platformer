#include <SFML/Graphics.hpp>
#include "Vector2.h"

int main() {

    // initialize framework
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(800, 600, 32), "Platformer", sf::Style::Default, settings);
    window.setFramerateLimit(30);

    sf::Font font;
    font.loadFromFile("../fonts/OpenSans-Regular.ttf");

    Vector2 pos(0,400);
    Vector2 gravity(0, 1.981);
    Vector2 vel(2,0);

    while (window.isOpen()) {
        // handle events
        sf::Event event{};
        window.pollEvent(event);

        vel.setX(0);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            vel.setY(vel.y() - 10);
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            vel.setX(-10);
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            vel.setX(10);
        }

        // draw the background
        window.clear(sf::Color(100, 100, 150));

        // draw "test" on screen
        sf::Text testText(std::to_string(pos.y()), font, 18);
        testText.setFillColor(sf::Color::Black);
        testText.setCharacterSize(18);
        testText.setPosition(pos.x(), pos.y());
        window.draw(testText);

        vel+=gravity;
        pos+=vel;

        if (pos.y() >= 550 && vel.y() > 0) {
            vel.setY(0.0); // no bounce
            pos.setY(550);
        }

        if (pos.x() >= 750 || pos.x() <= 0) {
            vel.setX(0.0);// no bounce
        }

        window.display();
    }
}
