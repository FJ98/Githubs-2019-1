// Created by felix on 6/28/2019.
#ifndef SRC_RECTANGLE_H
#define SRC_RECTANGLE_H

#include "Component.h"

class Rectangle : public Component{
public:
    int x,y;
    float weight, height;
public:
    Rectangle(int x, int y, float weight, float height) : x{x}, y{y}, weight{weight}, height{height} {}

};


#endif //SRC_RECTANGLE_H
