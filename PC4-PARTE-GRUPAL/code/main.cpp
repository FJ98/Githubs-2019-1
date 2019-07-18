#include "Matriz.h"
#include "MatrizConcurrente.h"
#include <chrono>
#include<sys/time.h>
#include <assert.h>

using namespace std::chrono;

int main() {
    // NO CONCURRENTE
    Matriz<int> m1(10,10), m2(10,10), m3(10,10);
    assert(m1.get_columnas() == m2.get_filas());
    m1.print_matriz(); m2.print_matriz();
    auto start1 = high_resolution_clock::now();
    m3 = m1*m2;
    auto stop1 = high_resolution_clock::now();
    m3.print_matriz();

//----------------------------------------------

    // CONCURRENTE
    MatrizConcurrente<int> m11(10,10), m21(10,10), m31(10,10);
    assert(m11.get_columnas() == m21.get_filas());
    m11.print_matriz(); m21.print_matriz();
    auto start11 = high_resolution_clock::now();
    m31 = m11*m21;
    auto stop11 = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop11 - start11);

    m31.print_matriz();
    std::cout << "Time: " << duration.count() << std::endl;

    return 0;
}
