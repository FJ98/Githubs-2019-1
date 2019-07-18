#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cassert>

#include "TwoLinkedList.h"

using namespace std;
using namespace UTEC;
int main() {

    UTEC::TwoLinkedList tll;

    // Agregando valores a lista # 1
    tll.push_back1(1);
    tll.push_back1(2);
    tll.push_back1(3);
    tll.push_back1(4);
    tll.push_back1(5);

    // Agregando valores a lista # 2
    tll.push_back2(0);
    tll.push_back2(10);
    tll.push_back2(20);
    tll.push_back2(30);
    tll.push_back2(40);
    tll.push_back2(50);

    // Unir Listas y agregar valores a ambas listas
    assert(tll.getlist(1) == string("1 2 3 4 5 "));
    assert(tll.getlist(2) == string("0 10 20 30 40 50 "));
    assert(tll.getlist(0) == string());

    auto resul1t1 = tll.merge(66);
    assert(resul1t1 == string("Operación Exitosa"));


    // Valores unidos
    tll.pushback1(77);
    tll.pushback2(88);
    tll.pushback1(99);
    auto result2 = tll.merge(100);
    assert(result2 == string("Operación duplicada"));
    assert(tll.getlist(0) == string("66 77 88 99 "));

    // Grabando Valores
    tll.save("output.txt");

    // comparando archivos
    ifstream file1("test.txt");
    ifstream file2("output.txt");

    vector<string> test;
    vector<string> output;

    string line;
    while (getline(file1, line))
        test.push_back(line);

    while (getline(file2, line))
        output.push_back(line);

    assert(test.size() == output.size());

    for (int i = 0; i < test.size(); i++)
        assert(test[i] == output[i]);


    return 0;
}
