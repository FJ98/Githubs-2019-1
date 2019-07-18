// Created by felix on 6/19/2019.
#ifndef CODE_MATRIZCONCURRENTE_H
#define CODE_MATRIZCONCURRENTE_H

#include <iostream>
#include <random>
#include <thread>
#include <vector>

static const int NUM_HILOS = 4;
using namespace std;

template <typename T>
class MatrizConcurrente{
    int filas;
    int columnas;
    T** matriz;
public:
    MatrizConcurrente():filas{0}, columnas{0} {};
    MatrizConcurrente(T filas, T columnas):filas{filas}, columnas{columnas} {
        matriz = new T *[filas];

        for (int i = 0; i < filas; ++i){
            matriz[i] = new T[columnas];
        }
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                matriz[i][j] = rand()%3 + 1;
            }
        }
    }

    T get (int i, int j) { return matriz[i][j]; }
    int get_filas () { return filas; }
    int get_columnas () { return columnas; }
    void set(int pos_fila, int pos_columna, T valor){ matriz[pos_fila][pos_columna] = valor; }

    MatrizConcurrente<T> operator*(MatrizConcurrente<T> other){
        MatrizConcurrente<T> matrizTemp(filas,other.get_columnas());
        std::vector<std::thread> hilos;

        for (int i = 0; i < NUM_HILOS; ++i) {
            hilos.emplace_back(&MatrizConcurrente<T>::multiplicarF, this, i,std::ref(other),std::ref(matrizTemp) );
        }
        for (int j = 0; j < NUM_HILOS; ++j) {
            hilos[j].join();
        }
        return matrizTemp;
    }
    
    void multiplicarF(int idHilo, MatrizConcurrente<T>& Matriz2, MatrizConcurrente<T>& Matriz3){
        int inf, sup, extra;
        extra = this->filas % NUM_HILOS;
        inf = idHilo * (this->filas / NUM_HILOS);
        sup = (idHilo+1) * (this->filas / NUM_HILOS);
        if (idHilo == NUM_HILOS - 1 && extra != 0) {
            sup += extra;
        }
        for (int i = inf; i < sup; ++i) {
            for (int j = 0; j < Matriz2.columnas; ++j){
                T valor = 0;
                for (int k = 0; k < Matriz2.filas; ++k) {
                    valor += this->matriz[i][k] * Matriz2.matriz[k][j];
                }
                Matriz3.matriz[i][j] = valor;
            }
        }
    }

    bool igual_dimension(MatrizConcurrente<T> other){
        return ((filas == other.get_filas()) && (columnas == other.get_columnas()));
    }

    void print_matriz(){
        for (int i = 0; i < filas; ++i){
            for (int j = 0; j < columnas; ++j)
                std::cout << matriz[i][j] << "\t";
            std::cout << std::endl;
        } std::cout << std::endl;
    }
};



#endif //CODE_MATRIZCONCURRENTE_H
