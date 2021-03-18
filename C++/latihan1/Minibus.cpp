#include "Minibus.hpp"
#include "Kendaraan.hpp"
#include<iostream>
using namespace std;

Minibus :: Minibus() : Kendaraan()
{
	// sama dengan parents
}

Minibus :: Minibus(const Minibus& b) : Kendaraan(b)
{
	// sama dengan parents
}

void Minibus :: operator=(const Minibus& b)
{
	Kendaraan :: operator=(b);
}

void Minibus :: PrintInfo() const
{
	Kendaraan :: PrintInfo();
}

long long Minibus :: CalculateDiscount(int lamaSewa) const
{
	return (lamaSewa > 10 ? BiayaSewa(lamaSewa) * 0.9 : BiayaSewa(lamaSewa));
}

long long Minibus :: BiayaSewa(int lamaSewa) const
{
	return (1000000 * lamaSewa);
}