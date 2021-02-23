#include "Kendaraan.hpp"
#include<iostream>
using namespace std;

Kendaraan :: Kendaraan()
{
	this->nomorKendaraan = 0;
//	this->kategori = "mobil";
	this->tahunKeluaran = 0;
	this->merk = "XXX";
}

Kendaraan :: Kendaraan(int nomorKendaraan, string merk, int tahun)
// Kendaraan :: Kendaraan(int nomorKendaraan, string kategori, string merk, int tahun)
{
	this->nomorKendaraan = nomorKendaraan;
//	this->kategori = kategori;
	this->merk = merk;
	this->tahunKeluaran = tahun;
}

Kendaraan :: Kendaraan(const Kendaraan& k)
{
	this->nomorKendaraan = k.nomorKendaraan;
//	this->kategori = k.kategori;
	this->merk = k.merk;
	this->tahunKeluaran = k.tahunKeluaran;
}

void Kendaraan :: operator=(const Kendaraan& k)
{
	this->nomorKendaraan = k.nomorKendaraan;
//	this->kategori = k.kategori;
	this->merk = k.merk;
	this->tahunKeluaran = k.tahunKeluaran;
}

Kendaraan :: ~Kendaraan()
{
	// cout << "destructor" << endl;
}

void Kendaraan :: PrintInfo() const
{
	cout << nomorKendaraan << " " << merk << " " << tahunKeluaran << endl;
//	cout << nomorKendaraan << " " << kategori << " " << merk << " " << tahunKeluaran << endl;
}

/*
int Kendaraan :: BiayaSewa(int lamaSewa) const
{
	if(this->kategori == "Bus") return (1000000 * lamaSewa);
	// else if(this->kategori == "Minibus") return 5000000 + (lamaSewa <= 5 ? 0 : 500000 * (lamaSewa - 5))
	else if(this->kategori == "Minibus") return (max(5000000, 5000000 + 500000*(lamaSewa - 5)));
	else return (500000 * lamaSewa);
}
*/
