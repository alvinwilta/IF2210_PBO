// file main.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 07
    Tanggal: 11/02/2021
    Topik: Praktikum 1
*/
/*
cons 1
cons 2
ccons 1
cassign 1 = 2
show 2
dest 2
dest 2
dest 1
*/
#include <iostream>
#include "A.hpp"

int main() {
    A * A1 = new A('1');
    A * A2 = new A('2');
    A * A3 = new A(*A1);
    *A3 = *A2;
    A2->show();
    delete A2;
    delete A3;
    delete A1;
    return 0;
}