// Created by felix on 6/7/2019.
#ifndef PC3_SECCION_H
#define PC3_SECCION_H

#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

//Ejercicio 3
class Seccion{
private:
    std::map<std::string, int> mapAlumnos;
public:
    void crear() {

    }

    void listar() {
        int sum = 0;
        int x;
        ifstream inFile;

        inFile.open("notas.txt");
        if (!inFile) {
            cout << "No se puede abrir!";
            exit(1);
        }

        while (inFile >> x) {
            sum = sum + x;
        }

        inFile.close();
        cout << "Sum = " << sum << endl;
    }

    void borrar() {

    }
};

#endif //PC3_SECCION_H
