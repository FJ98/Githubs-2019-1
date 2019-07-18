// Created by felix on 5/24/2019.
#include "unionFind.h"

unionFind::unionFind(int p_tamano){
    this->tamano = p_tamano;
    this->numComp = p_tamano;
    for (int i = 0; i < tamano; ++i) { id[i]=i;  tam[i]=1; }
}

void makeSet(int n){
    for (int i = 0; i < n; ++i) {

    }
}

int unionFind::find(int p) {
    int raiz = p;
    while(raiz!=id[raiz]){raiz=id[raiz];}
    while(p!=id[raiz]){raiz=id[raiz];}

    return raiz;
}

int unionFind::tamanoComponente(int p){return tam[find(p)];}
bool unionFind::conectado(int p, int q) {return find(p)==find(q);}
int unionFind::getNumComp() {return numComp;}

void unionFind::doUnion(int p, int q) {
    int raiz1 = find(p);
    int raiz2 = find(q);
    if(raiz1==raiz2){return;}
    if(tam[raiz1] < tam[raiz2]){
        tam[raiz2] += tam[raiz1];
        id[raiz1] = raiz2;
    }else{
        tam[raiz1] += tam[raiz2];
        id[raiz2] = raiz1;
    }
    numComp--;
}

std::vector<int> unionFind::makeSet(int n) {
    return std::vector<int>();
}

