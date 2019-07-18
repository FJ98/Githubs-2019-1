// Created by felix on 6/5/2019.
#ifndef SOLUCION_FUNCIONES_H
#define SOLUCION_FUNCIONES_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
struct generatePA {
    T current_;
    T inc_;
    explicit generatePA (T start, T inc) : current_(start - inc), inc_(inc) {}
    T operator() () {
        return current_ +=  inc_;
    }
};

template <int T>
struct Fibonacci{
    enum { value = (Fibonacci<T - 1>::value + Fibonacci<T - 2>::value) };
};
template <>
struct Fibonacci<0> { enum { value = 1 }; };
template <>
struct Fibonacci<1> { enum { value = 1 }; };
//template <> struct Fibonacci<2> { enum { value = 1 }; };

template <typename T>
T fibo(T n){
    if (n < 2){
        return 1;
    }else{
        return (fibo(n-1)+fibo(n-2));
    }
}



#endif //SOLUCION_FUNCIONES_H
