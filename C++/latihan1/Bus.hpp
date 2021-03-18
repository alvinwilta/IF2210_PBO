#ifndef BUS_HPP
#define BUS_HPP

#include "Kendaraan.hpp"
#include<iostream>
using namespace std;

class Bus : public Kendaraan
{
	private :
		int kapasitas;
	public :
		Bus();
		Bus(int kapasitas);
		Bus(int kapasitas, int nomorKendaraan, string merk, int tahunKeluaran);
		Bus(const Bus& b);
		void operator=(const Bus& b);
		void PrintInfo() const;
		long long BiayaSewa(int lamaSewa) const;
};

#endif