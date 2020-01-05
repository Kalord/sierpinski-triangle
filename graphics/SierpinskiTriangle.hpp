#include <SFML/Graphics.hpp>
#include <vector>

#include "Triangle.hpp"
#include "../geometry/TriangleGeometry.hpp"

/**
 * Треугольник Серпинского
 * 
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class SierpinskiTriangle
{
public:
    /**
     * Треугольники
     **/
    std::vector<Triangle> triangles;

    /**
     * Пересчет контуров
     **/
    void calcContour(
        std::vector<sf::Vector2f> midSide,
        std::vector<sf::Vector2f> currentContour,
        std::vector<std::vector<sf::Vector2f>>& storage
    );

    SierpinskiTriangle(
        std::vector<sf::Vector2f> vertexs,
        sf::Color color
    );

    /**
     * Генерация треугольника Серпинского до определенной глубины
     **/
    void gen(size_t deep);

    std::vector<Triangle> getTriangles();
};