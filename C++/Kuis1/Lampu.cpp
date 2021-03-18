// file Lampu.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Kelas: 03
    Tanggal: 10/02/2021
    Topik: Kuis
*/

#include <iostream>
#include "Lampu.h"

int Lampu::TtlLamp = 0;
//ctor
Lampu::Lampu():Id(++Lampu::TtlLamp) {
    this->Nyala = false;
}

//cctor
Lampu::Lampu(const Lampu& L):Id(L.Id) {
    this->Nyala = L.Nyala;
}

Lampu::~Lampu() {
    //dtor
}
void Lampu::set_nyala(int a) {
    if (this->Id == a) {
        this->Nyala = true;
    }
} /* Mengeset nilai true untuk status nyala lampu sesuai nomor lampu */
void Lampu::set_mati(int a) {
    if (this->Id == a) {
        this->Nyala = false;
    }
} /* Mengeset nilai false untuk status nyala lampu sesuai nomor lampu */
bool Lampu::get_info(int a) {
    if (this->Id == a) {
        return this->Nyala;
    }
} /* Memperoleh info status nyala lampu saat ini sesuai nomor lampu */