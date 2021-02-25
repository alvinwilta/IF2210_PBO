// file WarungNasgor.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 7
    Tanggal: 18/02/2021
    Topik: Responsi 2 - Minggu 5
*/

#include "WarungNasgor.hpp"
#include <iostream>
using namespace std;

WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap) : WarungNasi(uang, telur, nasi) {
    this->kecap = kecap;
}

bool WarungNasgor::masak(int pesanan) {
    if (WarungNasi::getNasi() < pesanan && WarungNasi::getTelur() < pesanan && this->kecap < pesanan) {
        return false;
    } else {
        int pendapatan = pesanan * 15000;
        WarungNasi::setUang(getUang() + pendapatan);
        return true;
    }
}