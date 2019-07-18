// Created by jeanlee on 19/06/19.
#ifndef CODE_MATRIZ_H
#define CODE_MATRIZ_H

#include <iostream>
#include <random>

using namespace std;

template <typename T>
class Matriz{
    int filas;
    int columnas;
    T** matriz;
public:
    Matriz():filas{0}, columnas{0} {};
    Matriz(T filas, T columnas):filas{filas}, columnas{columnas} {
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

    T get(int i, int j){ return matriz[i][j]; }
    T get_filas(){ return filas; }
    T get_columnas(){ return columnas; }
    void set(int pos_fila, int pos_columna, T valor){ matriz[pos_fila][pos_columna] = valor; }

    Matriz<T> operator+(Matriz<T> other) const{
        Matriz<T> temp(filas,columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                temp.set(i, j, matriz[i][j] + other.get(i, j));
            }
        }
        return temp;
    }

    Matriz<T> operator*(Matriz<T> other) const{
        Matriz<T> temp(filas,other.get_columnas());
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < other.get_columnas(); ++j){
                T valor = 0;
                for (int k = 0; k < columnas; ++k) {
                    valor += matriz[i][k] * other.get(k,j);
                }
                temp.set(i,j, valor);
            }
        }
        return temp;
    }

    bool igual_dimension(Matriz<T> other){
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

#endif //CODE_MATRIZ_H
