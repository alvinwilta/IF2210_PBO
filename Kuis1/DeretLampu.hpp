// file DeretLampu.hpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Kelas: 03
    Tanggal: 10/02/2021
    Topik: Kuis
*/

#ifndef _DERETLAMPU_HPP_
#define _DERETLAMPU_HPP_
#include "Lampu.h"

class Deret_Lampu {
  private:
    /* isi atribut di sini: */
    const int Size;
    Lampu* data;
  public:
    Deret_Lampu();  /* ctor: Membuat array Deret Lampu dengan size 100, Neff = 10.
                             (Termasuk menciptakan 10 lampu awal untuk disimpan dalam array) */
    //Deret_Lampu(int n); /* ctor: Membuat array Deret Lampu dengan size n, Neff = max(n,10) */
    Deret_Lampu(const Deret_Lampu& D); /* cctor */
    //Deret_Lampu& operator= (const Deret_Lampu&);  /* operator assignment */
    ~Deret_Lampu();  /* dtor  */
    //Deret_Lampu& operator*=(const Deret_Lampu&); 
                        /* Melipatgandakan rangkaian lampu: 10 lampu menjadi 20 lampu, dengan nomor 1..20, asumsikan ukuran array cukup */
    void atur_nyala(int a); /*Mengatur nyala lampu sesuai dengan aturan pilihan nomor saklar*/
};
#endif
