#include <iostream>
#include <set>
#include "unionFind.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::set<int> s;
    //uf[8] >> uf[3] // El nodo 3 es el padre del nodo 8
    /*for (int i = 0; i < 10; ++i) {
        s.insert(10-i);
    }*/
    // UnionFind<int> uf(25);
    //  uf[8] >> uf[3] // El nodo 3 es el padre del nodo 8
    s.insert(10);
    s.insert(20);
    s.insert(14);
    s.insert(17);

    //std::set<int>::iterator it;
    //it =s.find(6);

    for(auto & item : s){
        std::cout << item << "  ";
    }std::cout<<std::endl;
    std::cout << *(s.find(10)) << std::endl;
    //std::cout << *it << std::endl;


    return 0;
}