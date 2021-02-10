#ifndef KENDARAAN_HPP
#define KENDARAAN_HPP

#include<iostream>
using namespace std;

class Kendaraan
{
	private :
		int nomorKendaraan;
		string kategori;
		string merk;
		int tahunKeluaran;
	public :
		Kendaraan();
		Kendaraan(int nomorKendaraan, string kategori, string merk, int tahun);
		Kendaraan(const Kendaraan& k);
		void operator=(const Kendaraan& k);
		~Kendaraan();
		
		void PrintInfo() const;
		long long BiayaSewa(int lamaSewa) const;
};
#endif
