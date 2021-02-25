#ifndef MINIBUS_HPP
#define MINIBUS_HPP

#include "Kendaraan.hpp"
#include <iostream>
using namespace std;

class Minibus : public Kendaraan
{
	private :
		// sesuai parent
	public :
		Minibus();
		Minibus(const Minibus& b);
		void operator=(const Minibus& b);
		void PrintInfo() const;
        long long BiayaSewa(int lamaSewa) const;
        long long CalculateDiscount(int lamaSewa) const;
};

#endif