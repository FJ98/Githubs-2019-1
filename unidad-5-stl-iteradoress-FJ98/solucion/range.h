// Created by felix on 6/5/2019.
#ifndef SOLUCION_RANGE_H
#define SOLUCION_RANGE_H

class range_iterator{
    int curr;
    int step;
    friend class range;
    range_iterator(int curr, int step):
    curr{curr}, step{step}{}
public:
    bool operator==(const range_iterator& other) const;
    bool operator!=(const range_iterator& other) const;
    int operator*();
    range_iterator& operator++();
    range_iterator& operator++(int);
};

class range{
    int start;
    int stop;
    int step;
public:
    range(int stop):start{0}, stop{stop}, step{1}{}
    range(int start, int stop):
            start{start}, stop{stop}, step{1}{}
    range(int start, int stop, int step):
            start{start}, stop{stop}, step{step}{}

    // para usar el iterador necesito metodos begin() y end()
    using iterator = range_iterator;
    iterator begin() const {
        return range::iterator(start, step);
    }

    iterator end() const {
        return range::iterator(stop, step);
    }
};

bool range_iterator::operator==(const range_iterator &other) const {
    return curr == other.curr;
}

bool range_iterator::operator!=(const range_iterator &other) const {
    return curr <= other.curr;
}

int range_iterator::operator*() {
    return curr;
}

range_iterator &range_iterator::operator++() {
    curr += step;
    return *this;
}

range_iterator &range_iterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}

#endif //SOLUCION_RANGE_H
