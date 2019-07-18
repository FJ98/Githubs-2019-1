#include "Funciones.h"
#include "Progression.h"
#include "range.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    const int n = 5;
    int x = Fibonacci<n>::value;
    std::cout << "Fibonacci de "<< n << ": " << x << std::endl;

    std::vector<int> v3(5);
    generatePA<int> g ( 2, 2 );
    std::generate( v3.begin(), v3.end(), g);
    std::cout << "Progresion Aritmetica: ";
    for (auto item1:v3){
        std::cout << item1 << " ";
    } std::cout << std::endl;

    int sum2{0};
    for (auto it2 = begin(v3); it2 != end(v3) ; it2++) {
        sum2 += *it2;
    } std::cout << "Suma de la progresion: "<< sum2 << std::endl;


    for(auto i: range{10}){
        std::cout << i << " ";
    }std::cout << std::endl;

    for(auto i: range{1,10}){
        std::cout << i << " ";
    }std::cout << std::endl;

    for(auto i: range{1,10,2}){
        std::cout << i << " ";
    }std::cout << std::endl;

    std::cout << "Progresion Aritmetica: ";
    for (auto i: AritProg{4,20,4}) {
        std::cout << i << " ";
    }std::cout << std::endl;

    std::cout << "Progresion Geometrica: ";
    for (auto i: GeoProg{2,16,4}) {
        std::cout << i << " ";
    }std::cout << std::endl;

    std::cout << "Progresion Fibonacci: ";
    for (auto i: FiboProg{2, 8, 1}) {
        std::cout << i << " ";
    }std::cout << std::endl;




    return 0;
}