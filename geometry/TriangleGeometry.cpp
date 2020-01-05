#include "TriangleGeometry.hpp"

std::vector<sf::Vector2f> TriangleGeometry::getMidSide(std::vector<sf::Vector2f> vertexs)
{
    std::vector<sf::Vector2f> midSide;

    midSide.push_back(
        sf::Vector2f((vertexs[0].x + vertexs[1].x) / 2, (vertexs[0].y + vertexs[1].y) / 2)
    );

    midSide.push_back(
        sf::Vector2f((vertexs[0].x + vertexs[2].x) / 2, (vertexs[0].y + vertexs[2].y) / 2)  
    );

    midSide.push_back(
        sf::Vector2f((vertexs[1].x + vertexs[2].x) / 2, (vertexs[1].y + vertexs[2].y) / 2)  
    );

    return midSide;
}