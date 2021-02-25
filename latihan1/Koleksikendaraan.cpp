//file KoleksiKendaraan.cpp

#include <iostream>
#include "KoleksiKendaraan.hpp"
#include "Kendaraan.hpp"
#include "Bus.hpp"
// #include "Car.hpp"
// #include "Minibus.hpp"
using namespace std;

KoleksiKendaraan :: KoleksiKendaraan()
{
    this->size = 100;
    this->neff = 0;
    this->array = new Kendaraan[this->size];
}

KoleksiKendaraan :: KoleksiKendaraan(int size)
{
    this->size = size;
    this->neff = 0;
    this->array = new Kendaraan[this->size];
}

KoleksiKendaraan :: KoleksiKendaraan(const KoleksiKendaraan& kk)
{
    this->size = kk.size;
    this->neff = kk.neff;
    this->array = new Kendaraan[kk.size];
    
	for (int i = 0; i < this->neff; i++)
	{
        this->array[i] = kk.array[i];
    }
}

void KoleksiKendaraan :: operator=(const KoleksiKendaraan& kk)
{
	delete[] this->array;
	
	this->size = kk.size;
    this->neff = kk.neff;
    this->array = new Kendaraan[this->size];
    for (int i = 0; i < this->neff; i++)
	{
        this->array[i] = kk.array[i];
    }
}

KoleksiKendaraan :: ~KoleksiKendaraan()
{
    delete[] array;
    this->neff = 0;
    this->size = 0;
}

void KoleksiKendaraan :: PrintAll() const
{
    for (int i = 0; i < this->neff; i++)
	{
        array[i].PrintInfo();
    }
}

void KoleksiKendaraan :: operator<<(Kendaraan& k)
{
    this->array[this->neff] = k;
    this->neff++;
}

void KoleksiKendaraan :: operator<<(KoleksiKendaraan& kk)
{
	int i = 0;
    while(this->neff < this->size && i < kk.neff)
    {
    	(*this) << kk.array[i];
    	i++;
	}
}
