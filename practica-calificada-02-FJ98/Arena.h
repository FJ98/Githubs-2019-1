// Created by felix on 5/10/2019.
#ifndef FELIX_ARENA_H
#define FELIX_ARENA_H

#include <string>
#include <vector>
#include "Fight.h"
#include "Fighter.h"

class Arena {
    std::vector<Fight> fights;
    void run(Fight f1);
public:
    Arena();
    std::vector<Fight> get_fights();
    void load_fights(std::string filename);
    void run_all();
};


#endif //FELIX_ARENA_H
