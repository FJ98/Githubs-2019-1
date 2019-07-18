// Created by felix on 5/10/2019.
#include "Arena.h"
#include <sstream>
#include <fstream>
#include <iostream>

Arena::Arena() {}

std::vector<Fight> Arena::get_fights() {return fights;}

void Arena::load_fights(std::string filename) {
    std::ifstream in(filename);
    bool bandera=false;
    Fight nuevo;
    std::vector<std::string> datos;

    if(in){
        std::string line;
        while(getline(in,line)){
            std::stringstream sep(line);
            std::string field;
            while(getline(sep,field,',')){
                datos.push_back(field);
            }
            if(bandera){
                fights.push_back(nuevo);
            }
            bandera = true;
            datos.clear();
        }
    }
}
void Arena::run_all() {
    for (auto item: fights) {
        run(item);
    }
}

void Arena::run(Fight f1) {
    if(f1.a->attack()>f1.b->attack()){
        f1.score= f1.a->defense()-f1.b->attack();
        std::cout<<"Gana peleador 1: " <<f1.score<<std::endl;
    }else{
        f1.score = f1.b->defense()-f1.a->attack();
        std::cout<<"Gana peleador 2"<<f1.score<<std::endl;
    }
}
