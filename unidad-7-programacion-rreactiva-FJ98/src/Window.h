// Created by felix on 6/28/2019.
#ifndef SRC_WINDOW_H
#define SRC_WINDOW_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Component.h"
#include "Rectangle.h"
#include "Circle.h"

class Window {
private:
    std::vector<Component*> controls;
    sf::RenderWindow window;
public:
    Window() :  window(sf::VideoMode(600, 600), "TTTTTTTTT") {}
    void run();
    void addComponent(Component* comp);
    void removeComponent(Component* comp);
    void notify();
    //void setStatus(int p_available);
};


#endif //SRC_WINDOW_H
