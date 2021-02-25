//Box.hpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 7
    Tanggal: 04/02/2021
    Topik: Latihan 1
*/

#ifndef __BOX_HPP__
#define __BOX_HPP__

class Box {
  private:
    int id;

  public:
    Box();
    Box(int);
    Box(const Box&);
    Box& operator=(const Box&);
    ~Box();

    void peek();
};

#endif