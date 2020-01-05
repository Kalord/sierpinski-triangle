#include "Triangle.hpp"

Triangle::Triangle(
    std::vector<sf::Vector2f> vertexs, 
    sf::Color color,
    bool upsideDown
)
{
    this->vertexs = vertexs;
    this->color = color;
    this->position = position;

    this->triangle.setPointCount(3);

    for(int i = 0; i < vertexs.size(); i++)
    {
        this->triangle.setPoint(i, vertexs[i]);
    }

    this->triangle.setPosition(position);

    if(upsideDown) triangle.setRotation(180.0f);
}

/**
 * Получение вершин
 **/
std::vector<sf::Vector2f> Triangle::getVertex()
{
    return this->vertexs;
}

/**
 * Отрисовка треугольника
 */
sf::ConvexShape Triangle::draw()
{
    return this->triangle;
}