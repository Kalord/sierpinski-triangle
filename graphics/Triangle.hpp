#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

/**
 * Сущность треугольника
 * 
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class Triangle
{
private:
    /**
     * Вершины треугольника
     **/
    std::vector<sf::Vector2f> vertexs;

    /**
     * Цвет треугольника
     **/
    sf::Color color;

    /**
     * Позиция треугольника
     **/
    sf::Vector2f position;

    sf::ConvexShape triangle;
public:
    Triangle(
        std::vector<sf::Vector2f> vertexs,
        sf::Color color,
        bool upsideDown = false
    );

    /**
     * Получение вершин
     **/
    std::vector<sf::Vector2f> getVertex();

    /**
     * Отрисовка треугольника
     */
    sf::ConvexShape draw();
};