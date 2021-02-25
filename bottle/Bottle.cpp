//Bottle.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 7
    Tanggal: 04/02/2021
    Topik: Latihan 1
*/

#include <iostream>
#include "Bottle.hpp"
using namespace std;

//static var declaration
int Bottle::numOfBottle = 0;

//ctor
Bottle::Bottle(): id(++Bottle::numOfBottle) {
    this->height = 10.00;
    this->radius = 10.00;
    this->waterHeight = 0.00;
}

Bottle::Bottle(float height, float radius): id(++Bottle::numOfBottle) {
    this->height = height;
    this->radius = radius;
    this->waterHeight = 0.00;
}

//cctor
Bottle::Bottle(const Bottle& bottle): id(bottle.id) {
    this->height = bottle.height;
    this->radius = bottle.radius;
    this->waterHeight = bottle.waterHeight;
}

//dtor
Bottle::~Bottle() {

}

//methods
int Bottle::getId() const {
    return this->id;
}
/* Mengembalikan id Bottle */

float Bottle::getWaterVolume() const {
    return this->waterHeight * this->radius * this->radius * PI;
}
/* Mengembalikan volume air dalam botol */

float Bottle::getBottleVolume() const {
    return this->height * this->radius * this->radius * PI;
}
/* Mengembalikan volume botol */

void Bottle::setHeight(float height) {
    this->height = height;
    this->waterHeight = height > this->waterHeight ? this->waterHeight : height;
}
/*
* Mengubah tinggi Bottle. Jika tinggi baru kurang dari tinggi air,
* maka tinggi air = tinggi yang baru.
*/

void Bottle::addWater(float waterVolume) {
    float newWaterHeight = getWaterHeightIfVolume(this->getWaterVolume() + waterVolume);
    this->waterHeight = newWaterHeight > this->height ? this->height : newWaterHeight;
}
/*
* Menambahkan air ke dalam botol. Jika botol tidak muat, biarkan
* botol penuh.
*/

void Bottle::substractWater(float waterVolume) {
    float newWaterHeight = getWaterHeightIfVolume(this->getWaterVolume() - waterVolume);
    this->waterHeight = newWaterHeight < 0 ? 0 : newWaterHeight;
}
/*
* Mengurangi air dari botol. Jika air yang tersedia kurang, biarkan
* botol kosong.
*/

float Bottle::getWaterHeightIfVolume(float waterVolume) const {
    return waterVolume / (this->radius * this->radius * PI);
}
/*
* Mengembalikan tinggi air dari botol jika diketahui suatu volume air.
* Tinggi botol diabaikan, dianggap tidak akan terlalu penuh.
*/

void Bottle::pourWaterTo(Bottle& other) {
    float waterDiff = other.getBottleVolume() - other.getWaterVolume();
    if (this->getWaterVolume() > waterDiff) {
        this->substractWater(waterDiff);
        other.waterHeight = other.height;
    } else {
        other.addWater(this->getWaterVolume());
        this->waterHeight = 0.00;
    }
}
/*
* Menuang isi botol ini ke botol lain sampai botol ini kosong.
* Jika botol lain penuh sebelum semua air pindah, maka penuangan
* berhenti dan terdapat sisa air di botol ini.
*/

