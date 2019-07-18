// Created by felix on 6/5/2019.
#ifndef SOLUCION_PROGRESSION_H
#define SOLUCION_PROGRESSION_H

#include <vector>

class ArithProg_iterator{
    int curr;
    int step;
    friend class AritProg;
    ArithProg_iterator(int curr, int step):
    curr{curr}, step{step} {}
public:
    bool operator==(const ArithProg_iterator& other)const;
    bool operator!=(const ArithProg_iterator& other)const;
    int operator*();
    ArithProg_iterator& operator++();
    ArithProg_iterator& operator++(int);
};

bool ArithProg_iterator::operator==(const ArithProg_iterator &other) const {
    return curr == other.curr;
}

bool ArithProg_iterator::operator!=(const ArithProg_iterator &other) const {
    return curr <= other.curr;
}

int ArithProg_iterator::operator*() {
    return curr;
}

ArithProg_iterator &ArithProg_iterator::operator++() {
    curr += step;
    return *this;
}

ArithProg_iterator &ArithProg_iterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}

class AritProg{
    int start;
    int stop;
    int step;
public:
    AritProg(int start): start{0}, stop{stop}, step{1}{}
    AritProg(int start, int stop):
            start{start}, stop{stop}, step{1}{}
    AritProg(int start, int stop, int step):
            start{start}, stop{stop}, step{step}{}

    // para usar el iterador necesito los metodos begin() y end()
    using iterator = ArithProg_iterator;
    iterator begin() const {
        return AritProg::iterator(start, step);
    }

    iterator end() const {
        return AritProg::iterator(stop, step);
    }
    //long nextValue();long calcular(std::vector<long>p_v1, int cantidad);std::vector<long> generarProgresion( int cantidad);
};

class GeoProg_iterator{
    int curr;
    int step;
    friend class GeoProg;
    GeoProg_iterator(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const GeoProg_iterator& other)const;
    bool operator!=(const GeoProg_iterator& other)const;
    int operator*();
    GeoProg_iterator& operator++();
    GeoProg_iterator& operator++(int);
};

bool GeoProg_iterator::operator==(const GeoProg_iterator &other) const {
    return curr == other.curr;
}

bool GeoProg_iterator::operator!=(const GeoProg_iterator &other) const {
    return curr <= other.curr;
}

int GeoProg_iterator::operator*() {
    return curr;
}

GeoProg_iterator &GeoProg_iterator::operator++() {
    curr *= step;
    return *this;
}

GeoProg_iterator &GeoProg_iterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}

class GeoProg{
    int start;
    int stop;
    int step;
public:
    GeoProg(int start): start{0}, stop{stop}, step{1}{}
    GeoProg(int start, int stop):
            start{start}, stop{stop}, step{1}{}
    GeoProg(int start, int stop, int step):
            start{start}, stop{stop}, step{step}{}

    // para usar el iterador necesito los metodos begin() y end()
    using iterator = GeoProg_iterator;
    iterator begin() const {
        return GeoProg::iterator(start, step);
    }

    iterator end() const {
        return GeoProg::iterator(stop, step);
    }
    //long nextValue();long calcular(std::vector<long>p_v1, int cantidad);std::vector<long> generarProgresion( int cantidad);
};


class FiboProg_iterator{
    int curr;
    int prev;
    friend class FiboProg;
    FiboProg_iterator(int curr, int prev)
    : curr{curr}, prev{prev}{}

public:
    bool operator==(const FiboProg_iterator& other) const;
    bool operator!=(const FiboProg_iterator& other) const;
    int operator*();
    FiboProg_iterator& operator++();
    FiboProg_iterator& operator++(int);
};

class FiboProg{
    int start;
    int stop;
    int prev;
public:
    explicit FiboProg(int start):
            start{start}{}
    FiboProg(int start, int stop):
            start{start}, stop{stop}{}
    FiboProg(int start, int stop,int  prev):
            start{start}, stop{stop}, prev{prev}{}

    using iterator = FiboProg_iterator;

    iterator begin()const {
        return FiboProg::iterator(start, prev);
    }

    iterator end() const {
        return FiboProg::iterator(stop, prev);
    }


};

bool FiboProg_iterator::operator==(const FiboProg_iterator &other) const {
    return curr == other.curr;
}

bool FiboProg_iterator::operator!=(const FiboProg_iterator &other) const {
    return curr <= other.curr;
}

int FiboProg_iterator::operator*() {
    return curr;
}

FiboProg_iterator& FiboProg_iterator::operator++() {
    auto saveCurr = curr;
    curr += prev ;
    prev = saveCurr;
    return *this;
}

FiboProg_iterator& FiboProg_iterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}





















/*
class GeoProg{
    int base;
public:
    GeoProg(long p_first, int p_base);
    long nextValue();
    long calcular(std::vector<long>p_v1, int cantidad);
    std::vector<long> generarProgresion(int cantidad);
};
//void imprimir(Progression* p1);
void imprimirSuma(long suma);
*/


#endif //SOLUCION_PROGRESSION_H
