// Created by felix on 5/10/2019.
#ifndef FELIX_DEFENSE_H
#define FELIX_DEFENSE_H


class Defense {
protected:
    int level;
public:
    Defense(int p_level);
    virtual int defense() = 0;
};
class Elude: public Defense{
public:
    Elude();
    Elude(int p_elude);
    int defense() override;
};
class Shield: public Defense{
public:
    Shield();
    Shield(int p_shield);
    int defense() override;
};
class Armor : public Defense{
public:
    Armor();
    Armor(int p_armor);
    int defense() override;
};






#endif //FELIX_DEFENSE_H
