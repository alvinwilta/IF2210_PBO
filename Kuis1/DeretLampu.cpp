// file DeretLampu.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Kelas: 03
    Tanggal: 10/02/2021
    Topik: Kuis
*/

#include <iostream>
#include "DeretLampu.hpp"

int Uk = 10;

Deret_Lampu::Deret_Lampu():Size(Uk) {
    data = new Lampu[this->Size];
    for (int i=0;i<this->Size;i++) {
        this->data[i] = new Lampu();
    }
}

Deret_Lampu::~Deret_Lampu() {
    delete[] this->data;
}

