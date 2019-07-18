// Created by felix on 6/28/2019.
#include "Window.h"
#include <algorithm>
#include <SFML/Graphics.hpp>


void Window::run() {
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
    while (window.isOpen()){
        sf::Event event{};
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        //window.draw();
        window.display();
    }
}

void Window::addComponent(Component *comp) {
    controls.push_back(comp);
}

void Window::removeComponent(Component *comp) {
    auto item = std::find(begin(controls),end(controls), comp);
    if (item != end(controls)) { controls.erase(item); }
}

void Window::notify() {
    std::function<void (Event)> click;
    for (auto control: controls) {
        control->onClick( click );
    }
}



