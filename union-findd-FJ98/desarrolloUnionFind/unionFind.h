// Created by felix on 5/24/2019.
#ifndef DESARROLLOUNIONFIND_UNIONFIND_H
#define DESARROLLOUNIONFIND_UNIONFIND_H

#include <vector>

class unionFind{
private:
    int tamano;
    int numComp;
    std::vector<int> tam;
    std::vector<int> id;
public:
    unionFind() = default;
    explicit unionFind(int p_tamano);
    void makeSet(int n);
    int find(int p);
    bool conectado(int p, int q);
    int getNumComp();
    int tamanoComponente(int p);
    void doUnion(int p, int q);
};




#endif //DESARROLLOUNIONFIND_UNIONFIND_H
