// file Polinom.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 07
    Tanggal: 11/02/2021
    Topik: Praktikum 1
*/

#include <iostream>
#include "Polinom.hpp"

using namespace std;

//ctor
Polinom::Polinom():Polinom(0) {

}

//ctor
Polinom::Polinom(int n) {
    this->derajat = n;
    koef = new int[this->derajat+1];
    for (int i = 0; i <= n; i++) {
      this->koef[i] = 0;
    }
}

//cctor
Polinom::Polinom(const Polinom& P) {
    this->derajat = P.derajat;
    koef = new int[P.derajat+1];
    for (int i=0; i<=this->derajat; i++) {
        this->koef[i] = P.koef[i];
    }
}

//dtor
Polinom::~Polinom() {
    delete[] this->koef;
}

// operator
Polinom& Polinom::operator=(const Polinom& P) {
    this->derajat = P.derajat;
    koef = new int[P.derajat+1];
    for (int i=0; i<=this->derajat; i++) {
        this->koef[i] = P.koef[i];
    }
    return *this;
}

int Polinom::getKoefAt(int idx) const {
    return this->koef[idx];
}
int Polinom::getDerajat() const {
    return this->derajat;
}
void Polinom::setKoefAt(int idx, int val) {
    this->koef[idx] = val;
}

// set derajat dan mengubah ukuran array koef (ternyata salah)
// void Polinom::setDerajat(int d) {
//     int * newkoef = new int[d];
//     for(int i = 0; i < d; i++){
//         newkoef[i] = this->koef[i];
//     }
//     this->derajat = d;
//     delete[] this->koef;
//     this->koef = newkoef;
// }

void Polinom::setDerajat(int d) {
    this->derajat = d;
}


// Melakukan pembacaan koefisien sejumlah derajat Polinom, dimulai dari x^0 (konstanta)
void Polinom::input() {
    for (int i=0; i<this->derajat; i++) {
        cin >> this->koef[i];
    }
}

// Mencetak seluruh koefisien polinom. Untuk setiap koefisien akhiri dengan end-of-line
// Cetaklah apa adanya dari koefisien ke-0 hingga derajat tertinggi (termasuk apabila koefisien = 0)
void Polinom::printKoef() {
    for (int i=0;i<=this->derajat;i++) {
        cout << this->koef[i] << endl;
    }
}

// Menghitung hasil substitusi x dengan sebuah bilangan ke dalam polinom
int Polinom::substitute(int x) {
    int temp = 1;
    int ttl = this->getKoefAt(0);
    for (int i=1; i<=this->derajat; i++) {
        temp *= x;
        ttl += temp * this->getKoefAt(i);
    }
    return ttl;
}

// Mencetak polinom dengan format: A+Bx^1+Cx^2+Dx^3...dst (diakhiri dengan end-of-line)
// Apabila suatu koefisien bernilai < 0, gunakan tanda "-" untuk menggantikan tanda "+"
// Apabila suatu koefisien bernilai 0, lewati koefisien tersebut dan lanjutkan ke koefisien selanjutnya
// Jika seluruh koefisien bernilai 0, keluarkan "0"
void Polinom::print() {
    bool ksg = true;
    for (int i = 0; i <= getDerajat(); i++) {
        if (getKoefAt(i) != 0) {
            if (getKoefAt(i) > 0 && !ksg) {
                cout << "+";
            } 
            if (getKoefAt(i) < 0) {
                cout << "-";
            }
            if (i == 0) {
                cout << abs(getKoefAt(i));
            }else{
                if (abs(getKoefAt(i)) != 1){
                    cout << abs(getKoefAt(i));
                }
                cout << "x^" << i;
            }
            ksg = false;
        }
    }if (ksg){
        cout << "0";
    }
    cout << "" << endl;
}