//main.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 7
    Tanggal: 04/02/2021
    Topik: Latihan 1
*/

#include <iostream>
#include "Box.hpp"

using namespace std;

int main() {
    Box *b2 = new Box(2);
    Box *b0 = new Box();
    Box *b1 = new Box(1);
    
    *b0 = *b2;
    Box *b11 = new Box(*b1);

    b2->peek();
    b1->peek();

    delete b2;
    delete b11;
    delete b1;
    delete b0;
}