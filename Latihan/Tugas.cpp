#include "Tugas.hpp"
#include <iostream>
using namespace std;

//masih salah
Tugas::Tugas(int tanggal, int bobot, int bulan) {
    this->tanggal = tanggal;
    this->bobot = bobot;
    this->bulan = bulan;
}

int Tugas::getTanggal() const {
    return this->tanggal;
}

int Tugas::getBulan() const {
    return this->bulan;
}

int Tugas::getBobot() const {
    return this->bobot;
}

void Tugas::setBulan(int _bulan) {
    this->bulan = _bulan;
}

void Tugas::setBobot(int _bobot) {
    this->bobot = _bobot;
}

void Tugas::setTanggal(int _tanggal) {
    this->tanggal = _tanggal;
}

bool Tugas::kerjain(int selesai) {
    if (this->bulan < pesanan && this->bobot < pesanan*2) {
        return false;
    } else {
        int pendapatan = pesanan * 10000;
        setTanggal(getTanggal() + pendapatan);
        return true;
    }
}