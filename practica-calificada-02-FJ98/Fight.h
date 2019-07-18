// Created by felix on 5/10/2019.
#ifndef FELIX_FIGHT_H
#define FELIX_FIGHT_H

#include "Fighter.h"
class Fight {
public:
    Fighter* a;
    Fighter* b;
    Fighter* winner;
    int score;
    Fight();
    Fight(Fighter* a, Fighter* b);
    //int calculate_score(Fighter* a, Fighter* b);
    int getScore();
};


#endif //FELIX_FIGHT_H
