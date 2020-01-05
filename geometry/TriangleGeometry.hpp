#include<SFML/Graphics.hpp>
#include<vector>

/**
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class TriangleGeometry
{
public:
    static std::vector<sf::Vector2f> getMidSide(std::vector<sf::Vector2f> vertexs);
};