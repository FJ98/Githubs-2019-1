// Created by felix on 6/28/2019.
#ifndef SRC_CIRCLE_H
#define SRC_CIRCLE_H

#include "Component.h"
#include <SFML/Graphics.hpp>

class Circle : public Component {
private:
    int x{},y{};
    float weight{}, height{};
public:
    Circle() = default;
    Circle(int x, int y, float weight, float height) : x{x}, y{y}, weight{weight}, height{height} {}

};



#endif //SRC_CIRCLE_H
