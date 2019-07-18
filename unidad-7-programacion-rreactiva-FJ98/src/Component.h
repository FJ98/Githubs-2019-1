// Created by felix on 6/28/2019.
#ifndef SRC_COMPONENT_H
#define SRC_COMPONENT_H

#include "Event.h"
#include <functional>

class Window;

class Component{
protected:
    std::function<void (Event)> clickEvent;
    std::function<void (Event)> mouseMoveEvent;
    Window* parent;
public:
    Component() = default;
    virtual void onClick(std::function<void (Event)>& click) {
        this->clickEvent = click;
    }
    virtual void onMouseMove(std::function<void (Event)>& mouse) {
        this->mouseMoveEvent = mouse;
    }
    virtual void draw() {
        std::function<void (Event)> click;
        onClick( click );

    }
};


#endif //SRC_COMPONENT_H
