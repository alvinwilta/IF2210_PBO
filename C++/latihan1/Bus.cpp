#include "Bus.hpp"
#include "Kendaraan.hpp"
#include<iostream>
using namespace std;

Bus :: Bus() : Kendaraan()
{
	this->kapasitas = 0;
}

Bus :: Bus(int kapasitas) : Kendaraan()
{
	this->kapasitas = kapasitas;
}

Bus :: Bus(const Bus& b) : Kendaraan(b)
{
	this->kapasitas = b.kapasitas;
}

void Bus :: operator=(const Bus& b)
{
	Kendaraan :: operator=(b);
	this->kapasitas = b.kapasitas;
}

void Bus :: PrintInfo() const
{
	cout << "Bus : " << kapasitas << endl;
}

long long Bus :: BiayaSewa(int lamaSewa) const
{
	return (1000000 * lamaSewa);
}

