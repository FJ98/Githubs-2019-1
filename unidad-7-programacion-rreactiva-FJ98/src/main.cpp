#include <iostream>
#include "Window.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Window utc;
    utc.run();
    Component* rect = new Rectangle(1,2,4.5,7.5);
    Component* circ = new Circle(3,4,6.4,9.4);
    utc.addComponent(rect);
    utc.addComponent(circ);
    //utc.setStatus(10);
    return 0;
}