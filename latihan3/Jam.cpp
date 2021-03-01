#include "Jam.h"
#include "iostream"
using namespace std;

Jam :: Jam()
{
	this->HH = 0;
	this->MM = 0;
	this->SS = 0;
}

Jam :: Jam(int HH, int MM, int SS)
{
	this->HH = HH;
	this->MM = MM;
	this->SS = SS;
}

Jam :: Jam(const Jam& j)
{
	this->HH = j.HH;
	this->MM = j.MM;
	this->SS = j.SS;
}

void Jam :: operator = (const Jam& j)
{
	this->HH = j.HH;
	this->MM = j.MM;
	this->SS = j.SS;
}

bool Jam :: operator < (const Jam& j)
{
	if(this->HH < j.HH) return true;  // contoh membandingkan jam 13 dan jam 14
	if(this->HH > j.HH) return false; // contoh membandingkan jam 13 dan jam 1
	// komponen HH nya sama
	
	if(this->MM < j.MM) return true;  // contoh membandingkan 13:13 dan 13:14
	if(this->MM > j.MM) return false; // contoh membandingkan 13:13 dan 13:00
	// komponen MM nya sama
	
	if(this->SS < j.SS) return true;  // contoh membandingkan 13:13:00 dan 13:13:30
	return false; // sama atau melebihi
}

Jam :: ~Jam()
{
}

ostream& operator<< (ostream& out, const Jam& j)
{
	out << j.HH << ":" << j.MM << ":" << j.SS;
}
