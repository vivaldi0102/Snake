#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{

    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "SFML window");

    sf::RectangleShape rect;
    rect.setFillColor(sf::Color::Blue);
    rect.setPosition({ 400, 300 });
    rect.setSize({20.f, 20.f});


    while (window.isOpen())
    {

        while (const std::optional event = window.pollEvent())
        {

            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(rect);
        window.display();
    }
}