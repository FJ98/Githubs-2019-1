// Created by felix on 5/10/2019.
#include "Attack.h"

Attack::Attack(int p_power) : power{p_power}{}

Punch::Punch() : Attack{1} {}
Punch::Punch(int p_punch) : Attack(p_punch) {}
int Punch::attack() {return 0;}

Saber::Saber() : Attack{5} {}
Saber::Saber(int p_saber) : Attack(p_saber) {}
int Saber::attack() {return 0;}

Firearm::Firearm() : Attack{10} {}
Firearm::Firearm(int p_firearm) : Attack(p_firearm) {}
int Firearm::attack() {return 0;}

