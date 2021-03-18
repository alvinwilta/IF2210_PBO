// file DeretLampu.hpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Kelas: 03
    Tanggal: 10/02/2021
    Topik: Kuis
*/

#ifndef _LAMPU_H_
#define _LAMPU_H_

class Lampu {
  private:
    const int Id;
    bool Nyala;
    static int TtlLamp;
  public:
    Lampu();  /* ctor: membuat Lampu */
    //Lampu(int, bool); /* ctor: membuat Lampu dengan identitas nomor dan status nyala lampu */
    Lampu(const Lampu& L); /* cctor  */
    //Lampu& operator= (const Lampu&); /* operator assignment */
    ~Lampu();                        /* dtor */	
    void set_nyala(int a); /* Mengeset nilai true untuk status nyala lampu sesuai nomor lampu */
    void set_mati(int a); /* Mengeset nilai false untuk status nyala lampu sesuai nomor lampu */
    bool get_info(int a); /* Memperoleh info status nyala lampu saat ini sesuai nomor lampu */
};

#endif