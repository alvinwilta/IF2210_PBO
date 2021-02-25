//file WarungSaltedEgg.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 7
    Tanggal: 18/02/2021
    Topik: Responsi 2 - Minggu 5
*/

#include "WarungSaltedEgg.hpp"
#include <iostream>
using namespace std;

WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam) : WarungNasi(uang, telur, nasi) {
    this->telurAsin = telurAsin;
    this->ayam = ayam;
}

bool WarungSaltedEgg::masak(int pesanan) {
    if (WarungNasi::getNasi() < pesanan && WarungNasi::getTelur() < pesanan && this->telurAsin < 3*pesanan && this->ayam < pesanan) {
        return false;
    } else {
        int pendapatan = pesanan * 30000;
        WarungNasi::setUang(getUang() + pendapatan);
        return true;
    }
}
