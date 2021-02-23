//file KoleksiKendaraan.hpp

// koleksi kendaraan
#ifndef __KOL_KENDARAAN__
#define __KOL_KENDARAAN__
#include "Kendaraan.hpp"

class KoleksiKendaraan
{
	private :
		int size;
		int neff;
		Kendaraan* array;

	public :
		KoleksiKendaraan();
		KoleksiKendaraan(int size);
		KoleksiKendaraan(const KoleksiKendaraan& kk);
		void operator=(const KoleksiKendaraan& kk);
		~KoleksiKendaraan();
		
		void PrintAll() const;
		void operator<<(Kendaraan& k);
		void operator<<(KoleksiKendaraan& kk);
};

#endif
