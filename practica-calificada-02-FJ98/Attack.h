// Created by felix on 5/10/2019.
#ifndef FELIX_ATTACK_H
#define FELIX_ATTACK_H

class Attack {
protected:
    int power;
public:
    Attack(int p_power);
    virtual int attack() = 0;
};

class Punch: public Attack{
public:
    Punch();
    Punch(int p_punch);
    int attack() override ;
};
class Saber: public Attack{
public:
    Saber();
    Saber(int p_saber);
    int attack() override ;
};
class Firearm: public Attack{
public:
    Firearm();
    Firearm(int p_firearm);
    int attack() override ;
};


#endif //FELIX_ATTACK_H
