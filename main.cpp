#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

#include "graphics/Triangle.hpp"
#include "graphics/SierpinskiTriangle.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Sierpinski triangle");
    
    SierpinskiTriangle sierpinskiTriangle(
        std::vector<sf::Vector2f> {
            sf::Vector2f(80, 0),
            sf::Vector2f(0, 160),
            sf::Vector2f(160, 160)
        },
        sf::Color::White
    );

    sierpinskiTriangle.gen(3);
    std::vector<Triangle> triangles = sierpinskiTriangle.getTriangles();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        for(int i = 0; i < triangles.size(); i++)
        {
            window.draw(triangles[i].draw());
        }

        window.display();
    }

    return 0;
}