#include "Mobil.hpp"
#include "Kendaraan.hpp"
#include<iostream>
using namespace std;

Mobil :: Mobil() : Kendaraan()
{
	this->supir = "XXXX";
}

Mobil :: Mobil(string supir) : Kendaraan()
{
	this->supir = supir;
}

Mobil :: Mobil(const Mobil& b) : Kendaraan(b)
{
	this->supir = b.supir;
}

void Mobil :: operator=(const Mobil& b)
{
	Kendaraan :: operator=(b);
	this->supir = b.supir;
}

void Mobil :: PrintInfo() const
{
	cout << "Mobil : " << supir << endl;
}

long long Mobil :: BiayaSewa(int lamaSewa) const
{
	return (1000000 * lamaSewa);
}

