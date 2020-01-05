#include "SierpinskiTriangle.hpp"

SierpinskiTriangle::SierpinskiTriangle(
    std::vector<sf::Vector2f> vertexs,
    sf::Color color
)
{
    Triangle triangle(vertexs, color);
    this->triangles.push_back(triangle);
}

/**
 * Пересчет контуров
 **/
void SierpinskiTriangle::calcContour(
    std::vector<sf::Vector2f> midSide,
    std::vector<sf::Vector2f> currentContour,
    std::vector<std::vector<sf::Vector2f>>& storage
)
{
    storage.push_back(
        std::vector<sf::Vector2f>{
            midSide[0],
            currentContour[0],
            midSide[1]
        }
    );

    storage.push_back(
        std::vector<sf::Vector2f>{
            midSide[0],
            currentContour[1],
            midSide[2]
        }  
    );

    storage.push_back(
        std::vector<sf::Vector2f>{
            midSide[1],
            midSide[2],
            currentContour[2]
        }  
    );
}

/**
 * Генерация треугольника Серпинского до определенной глубины
 **/
void SierpinskiTriangle::gen(size_t deep)
{
    /**
     * Контуры, исходя из которых генерируется треугольник
     **/
    std::vector<std::vector<sf::Vector2f>> contour;
    contour.push_back(this->triangles[0].getVertex());

    for(int i = 0; i < deep; i++)
    {
        std::vector<sf::Vector2f> midSide = TriangleGeometry::getMidSide(contour[i]);
        this->triangles.push_back(
            Triangle(
                midSide,
                sf::Color::Blue,
                true
            )
        );

        this->calcContour(midSide, contour[i], contour);
    }
}

std::vector<Triangle> SierpinskiTriangle::getTriangles()
{
    return this->triangles;
}