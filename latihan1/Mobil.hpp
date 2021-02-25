#ifndef MOBIL_HPP
#define MOBIL_HPP

#include "Kendaraan.hpp"
#include <iostream>
using namespace std;

class Mobil : public Kendaraan
{
	private :
		string supir;
	public :
		Mobil();
		Mobil(string supir);
		Mobil(const Mobil& b);
		void operator=(const Mobil& b);
		void PrintInfo() const;
        long long BiayaSewa(int lamaSewa) const;
};

#endif