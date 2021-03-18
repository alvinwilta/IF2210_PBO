#include "Property.hpp"
#include <iostream>

#define CURRENT_YEAR 2021
using std::cout;
using std::endl;

Property::Property(string name, int openYear) {
    this->name = name;
    this->type = "none";
    this->openYear = openYear;
}

Property::Property() {
    this->name = "noname";
    this->type = "none";
    this->openYear = 1900;
}

Property::Property(const Property& other) {
  this->name = other.name;
  this->type = other.type;
  this->openYear = other.openYear;
}

void Property::set_name(string name) {
    this->name = name;
}

string Property::get_name() const {
    return this->name;
}

void Property::set_type(string type) {
    this->type = type;
}

string Property::get_type() const {
    return this->type;
}

int Property::get_age() const {
    return (CURRENT_YEAR - this->openYear);
}

void Property::displayInfo() {
    cout << "Property" << endl;
    cout << "nama: " << this->name << endl;
    cout << "umur: " << get_age() << endl;
    cout << "type: " << this->type << endl;
    cout << "rate: " << rate() << endl;
}

/*
ASUMSI
1 - harga ditentukan sendiri pertahunnya (hotel 4000, hostel 2000, villa 3000, cottage 2500)
2 - nama type bersifat singular (hotel, bukan hotels atau hostel, bukan hostels)
3 - jika type dimasukkan bukan sesuai pada yang di asumsi 1, maka return 0
*/
int Property::rate() {
    if (this->type=="hotel") {
        return 4000*get_age();
    } else if (this->type=="hostel") {
        return 2000*get_age();
    } else if (this->type=="villa") {
        return 3000*get_age();
    } else if (this->type=="cottage") {
        return 2500*get_age();
    } else {
        return 0;
    }
}

// REALISASI CLASS HOTEL

Hotel::Hotel(string name, int openYear): Property(name,openYear) {
    this->type = "hotel";
    this->star = 0;
}

void Hotel::set_star(float star) {
    this->star = star;
}

float Hotel::get_star() const {
    return this->star;
}

void Hotel::displayInfo() {
    cout << "Hotel" << endl;
    cout << "nama: " << this->name << endl;
    cout << "umur: " << get_age() << endl;
    cout << "type: " << this->type << endl;
    cout << "rate: " << rate() << endl;
    cout << "star: " << get_star() << endl;
}

// REALISASI CLASS HOSTEL

/*
ASUMSI
default n_fac adalah 1
*/
Hostel::Hostel(string name, int openYear): Property(name,openYear) {
    this->type = "hostel";
    this->n_fac = 1;
}

void Hostel::set_facility(int facil) {
    this->n_fac = facil;
}

int Hostel::get_facility() const {
    return this->n_fac;
}

int Hostel::calculateFacility() {
    return 80000*this->n_fac;
}

void Hostel::displayInfo() {
    cout << "Hostel" << endl;
    cout << "nama: " << this->name << endl;
    cout << "umur: " << get_age() << endl;
    cout << "type: " << this->type << endl;
    cout << "rate: " << rate() << endl;
    cout << "jml facility: " << this->n_fac << endl;
    cout << "expense: " << calculateFacility() << endl;
}