// Created by felix on 6/28/2019.
#ifndef SRC_EVENT_H
#define SRC_EVENT_H

class Event{
public:
    int x, y;
public:
    Event() = default;
    Event(int x, int y): x{x}, y{y} {}
    int getX() { return x; }
    int getY() { return y; }
};

#endif //SRC_EVENT_H
