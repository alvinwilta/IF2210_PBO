//ball.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 7
    Tanggal: 04/02/2021
    Topik: Latihan 1
*/

#include <iostream>
#include "Ball.hpp"
using namespace std;

//ctor
Ball::Ball() {
    this->radius = 1;
}

Ball::Ball(int radius) {
    this->radius = radius;
}

//cctor
Ball::Ball(const Ball& b) {
    this->radius = b.radius;
}

//dtor
Ball::~Ball() {

}

//methods
void Ball::bounce() {
    cout << "bo";
    for (int i=0;i < this->radius; i++) {
        cout << "i";
    }
    cout << "ng" << endl;
}