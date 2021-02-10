//file KoleksiKendaraan.cpp

#include <iostream>
#include "Koleksikendaraan.hpp"

using namespace std;
KoleksiKendaraan::KoleksiKendaraan() 
{
    this->size = 100;
    this->neff = 0;
    this->array = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(int size) 
{
    this->size = size;
    this->neff = 0;
    this->array = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan& kl) 
{
    this->size = kl.size;
    this->neff = kl.neff;
    this->array = new Kendaraan[kl.size];
    for (int i=0; i<this->neff; i++) 
    {
        this->array[i] = kl.array[i];
    }
}

KoleksiKendaraan::~KoleksiKendaraan() 
{
    delete[] array;
}

void KoleksiKendaraan::PrintAll() 
{
    for (int i=0; i<=neff-1; ++i) 
    {
        array[i].PrintInfo();
    }
}

KoleksiKendaraan& KoleksiKendaraan::operator<<(Kendaraan &k) 
{
    this->array[this->neff] = k;
    return *this;
}

KoleksiKendaraan& KoleksiKendaraan::operator<<(KoleksiKendaraan &kl) 
{
    int i = 0;
    while(this->neff < this->size && i < kl.neff)
    {
        (*this) << kl.array[i];
        ++i;
    }
    return *this;
}