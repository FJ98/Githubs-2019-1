// Created by felix on 5/10/2019.
#include "Defense.h"

Defense::Defense(int p_level) : level{p_level} {}

Elude::Elude(): Defense{1} {}
Elude::Elude(int p_elude) : Defense(p_elude) {}
int Elude::defense() {return 0;}

Shield::Shield():Defense{4} {}
Shield::Shield(int p_shield) : Defense(p_shield) {}
int Shield::defense() {return 0;}

Armor::Armor(): Defense{8} {}
Armor::Armor(int p_armor) : Defense(p_armor) {}
int Armor::defense() {return 0;}
