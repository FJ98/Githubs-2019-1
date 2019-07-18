// Created by felix on 5/10/2019.
#ifndef FELIX_FIGHTER_H
#define FELIX_FIGHTER_H

#include "Attack.h"
#include "Defense.h"
#include <vector>
#include <string>
class Fighter {
protected:
    std::vector<Defense> Def;
    std::vector<Attack> Att;
public:
    Fighter();
    virtual int attack() = 0;
    virtual int defense() = 0;
};
class BruceLee:public Fighter{
public:
    BruceLee();
    BruceLee(std::vector<Defense> def, std::vector<Attack> att);
    int attack();
    int defense();
};
class ChuckNorris:public Fighter{
public:
    ChuckNorris();
    ChuckNorris(std::vector<Defense> def, std::vector<Attack> att);
    int attack();
    int defense();
};
class JasonStatham:public Fighter{
public:
    JasonStatham();
    JasonStatham(std::vector<Defense> def, std::vector<Attack> att);
    int attack();
    int defense();
};



#endif //FELIX_FIGHTER_H
