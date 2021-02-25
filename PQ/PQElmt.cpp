//PQElmt.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 7
    Tanggal: 04/02/2021
    Topik: Latihan 1
*/

// PQElmt.cpp
#include "PQElmt.hpp"

PQElmt::PQElmt() {
  this->value = 0;
  this->prio = 0;
}

PQElmt::PQElmt(int value, int prio) {
  this->value = value;
  this->prio = prio;
}

PQElmt::PQElmt(const PQElmt& other) {
  this->value = other.value;
  this->prio = other.prio;
}

PQElmt::~PQElmt() {
  //
}

int PQElmt::getValue() const {
  return this->value;
}

int PQElmt::getPrio() const {
  return this->prio;
}

bool PQElmt::operator==(const PQElmt& other) {
  return this->value == other.value && this->prio == other.prio;
}

bool PQElmt::operator<(const PQElmt& other) {
  if (this->prio<other.prio) {
    return true;
  } else if (this->prio==other.prio) {
    return this->value>other.value ? true : false;
  } else {
    return false;
  }
}

bool PQElmt::operator>(const PQElmt& other) {
  if (this->prio>other.prio) {
    return true;
  } else if (this->prio==other.prio) {
    return this->value<other.value ? true : false;
  } else {
    return false;
  }
}