#include "Seccion.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>
#include <deque>
#include <array>
using namespace std;

// Ejercicio 1
template <typename T>
std::vector<T> operator+(std::vector<T> matriz1, std::vector<T> matriz2){
    assert(matriz1.size() == matriz2.size()); // verificar si los vectores o en este caso las matrices son del mismo tamano
    std::cout << "Matriz1 y Matriz2 son de igual dimension, se podran sumar.\n";//Ver si el assert funciona.

    std::vector<T> matriz3;
    matriz3.reserve(matriz1.size());

    std::transform(matriz1.begin(), matriz1.end(), matriz2.begin(), std::back_inserter(matriz3), std::plus<T>());
    return matriz3;
}
// Ejercicio 2
template <typename T>
void STLDeque(T *arr, int tamArr, int tamSubArr){
    std::deque<T> dq;
    for (int i = 0; i < tamArr; i++){

        if ( dq.empty() ) { dq.push_back(i); } // Para la primera iteracion
        if ( dq.front() <= (i - tamSubArr) ) { dq.pop_front(); }

        while ( !dq.empty() && arr[i] <= arr[dq.back()] ) { dq.pop_back(); }

        dq.push_back( i );
        //std::cout << dq.front() << std::endl;
        // for ( auto & item : dq ) { std::cout << item << " "; } std::cout << std::endl;
        if ( i >= (tamSubArr - 1) ) { std::cout << arr[dq.front()] << " "; }

    }
    std::cout << std::endl;
}

/*template <typename T>
std::deque<T> STLDeq(std::deque<T>& deque, int n){
    assert(deque.size() >= n);
    std::deque<T> retornar;
    for (size_t i = 0; i < retornar.size() - n - 1; ++i) {
        auto g = std::min_element(deque.begin() + i, deque.begin() + i + n);
        retornar.emplace_back(*g);
    }
    return retornar;
}*/

int main() {
    std::cout << "Hello, World!" << std::endl;

    // Ejercicio 1
    std::vector<int> m1{2,3,4,5};
    std::vector<int> m2{1,2,3,4};
    std::vector<int> m3;
    m3 = m1 + m2;

    std::cout << "Matriz1: ";
    for (auto item: m1) {
        std::cout << item << " ";
    } std::cout << std::endl;

    std::cout << "Matriz2: ";
    for (auto item: m2) {
        std::cout << item << " ";
    } std::cout << std::endl;

    std::cout << "Matriz 3: " << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::cout << m3[i]<< " ";
    } std::cout << std::endl;
    for (int j = 2; j < 4; ++j) {
        std::cout << m3[j]<< " ";
    } std::cout << std::endl;

    // Ejercicio 2
    int arr[6] = {1,5,4,8,2,4};
    int sizeArr = 6; // tamano del array
    int sizeSubArr = 3; // tamano de subgrupos que quiero que se formen
    std::cout << "Deque valores minimos: ";
    STLDeque(arr, sizeArr, sizeSubArr);


    /*std::deque<int> deque{5,1,4,8,2,4};
    std::deque<int> result = STLDeq(deque,3);
    for (auto & item: result){
        std::cout << item << " ";
    } std::cout << std:: endl;*/


    return 0;
}