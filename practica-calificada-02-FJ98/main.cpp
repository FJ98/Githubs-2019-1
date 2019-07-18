#include <iostream>
#include "Fight.h"
#include "Arena.h"
#include <cassert>
int main() {
    std::cout << "Hello, World!" << std::endl;
    const std::string LINK = "pelea.txt";
    Arena a1;
    a1.load_fights(LINK);
    for(auto i: a1.get_fights()){
        assert(i.a->attack()>i.b->attack());
    }
    a1.run_all();

    a1.get_fights();


    return 0;
}