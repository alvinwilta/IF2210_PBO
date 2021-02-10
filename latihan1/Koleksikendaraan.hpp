//file KoleksiKendaraan.hpp

// koleksi kendaraan
#ifndef __KOL_KENDARAAN__
#define __KOL_KENDARAAN__
#include "Kendaraan.hpp"

class KoleksiKendaraan 
{
    private:
        int size;
        int neff;
        Kendaraan* array;

    public:
        KoleksiKendaraan();
        KoleksiKendaraan(int size);
        KoleksiKendaraan(const KoleksiKendaraan& kl);
        ~KoleksiKendaraan();

        void PrintAll();
        KoleksiKendaraan& operator<<(Kendaraan &k);
        KoleksiKendaraan& operator<<(KoleksiKendaraan &kl);
    
};


#endif