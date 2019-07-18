// Created by felix on 5/17/2019.
#include <iostream>
#include <vector>
#include "QuickSort.h"
#include "catch.hpp"

SCENARIO("Probando QuickSort "){

    GIVEN("Probando con arreglo estatico de enteros"){
    WHEN("Arreglo desordenado: {10, 4, 7, 5, 8, 1, 6, 9, 3, 2}"){
            const int TAMANO = 10;
            int array[TAMANO] = {10, 4, 7, 5, 8, 1, 6, 9, 3, 2};
            quickSort(array, 0, TAMANO-1);
            THEN("Array es 1 2 3 4 5 6 7 8 9 10"){
                REQUIRE(array[0]==1);
                REQUIRE(array[1]==2);
                REQUIRE(array[2]==3);
                REQUIRE(array[3]==4);
                REQUIRE(array[4]==5);
                REQUIRE(array[5]==6);
                REQUIRE(array[6]==7);
                REQUIRE(array[7]==8);
                REQUIRE(array[8]==9);
                REQUIRE(array[9]==10);
            }
        }
    }

    GIVEN("Probando con arreglo estatico de decimales"){
        WHEN("Arreglo desordenado: {10.2, 4.7, 7.8, 5.1, 8.4, 1.9, 6.7, 9.5, 3.2, 2.43}"){
            const int TAMANO = 10;
            double array[TAMANO] = {10.2, 4.7, 7.8, 5.1, 8.4, 1.9, 6.7, 9.5, 3.2, 2.43};
            quickSort(array, 0, TAMANO-1);
            THEN("Array es 1 2 3 4 5 6 7 8 9 10"){
                REQUIRE(array[0]==1.9);
                REQUIRE(array[1]==2.43);
                REQUIRE(array[2]==3.2);
                REQUIRE(array[3]==4.7);
                REQUIRE(array[4]==5.1);
                REQUIRE(array[5]==6.7);
                REQUIRE(array[6]==7.8);
                REQUIRE(array[7]==8.4);
                REQUIRE(array[8]==9.5);
                REQUIRE(array[9]==10.2);
            }
        }
    }

    GIVEN("Probando con arreglos dinamico de enteros"){
        WHEN("Arreglo desordenado: {10, 4, 7, 5, 8, 1, 6, 9, 3, 2}"){
            const int TAMANO = 10;
            int *darray = new int[TAMANO];
            for(int i=0; i < TAMANO; ++i){
                darray[i] = i+1;
            }

            quickSort(darray, 0, TAMANO-1);

            THEN("Array es 1 2 3 4 5 6 7 8 9 10"){
                REQUIRE(darray[0]==1);
                REQUIRE(darray[1]==2);
                REQUIRE(darray[2]==3);
                REQUIRE(darray[3]==4);
                REQUIRE(darray[4]==5);
                REQUIRE(darray[5]==6);
                REQUIRE(darray[6]==7);
                REQUIRE(darray[7]==8);
                REQUIRE(darray[8]==9);
                REQUIRE(darray[9]==10);
            }
        }
    }

    GIVEN("Probando con arreglos dinamico de decimales"){
        WHEN("Arreglo desordenado: {10, 4, 7, 5, 8, 1, 6, 9, 3, 2}"){
            const int TAMANO = 10;
            auto darray = new double[TAMANO];
            for(int i=0; i < TAMANO; ++i){
                darray[i] = i+1.0;
            }
            quickSort(darray, 0, TAMANO-1);
            THEN("Array es 1 2 3 4 5 6 7 8 9 10"){
                REQUIRE(darray[0]==1.0);
                REQUIRE(darray[1]==2.0);
                REQUIRE(darray[2]==3.0);
                REQUIRE(darray[3]==4.0);
                REQUIRE(darray[4]==5.0);
                REQUIRE(darray[5]==6.0);
                REQUIRE(darray[6]==7.0);
                REQUIRE(darray[7]==8.0);
                REQUIRE(darray[8]==9.0);
                REQUIRE(darray[9]==10.0);
            }
        }
    }

}
