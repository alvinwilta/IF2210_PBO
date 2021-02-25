// file main.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 7
    Tanggal: 18/02/2021
    Topik: Responsi 2 - Minggu 5
*/
/*
ctor vehicle 3 2
cctor vehicle 3 2
ctor vehicle 6 50
ctor vehicle 4 8
ctor car 4 8
cctor vehicle 4 8
cctor car 4 8
ctor vehicle 4 6
ctor car 4 6
ctor vehicle 2 2
ctor bike 2 2
someone is driving this car 4 6
wheels 2 capacity 2
someone is riding this bike2 2
dtor bike 2 2
dtor vehicle 2 2
dtor car 4 6
dtor vehicle 4 6
dtor car 4 8
dtor vehicle 4 8
dtor car 4 8
dtor vehicle 4 8
dtor vehicle 6 50
dtor vehicle 3 2
dtor vehicle 3 2
*/

#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    Vehicle v1 = Vehicle(3, 2);
    Vehicle v2 = Vehicle(v1);
    Vehicle v3 = Vehicle (6,50);
    Car car = Car(8);
    Car car2 = Car(car);
    Car car3 = Car(6);
    Bike bike = Bike();
    car3.drive();
    bike.show();
    bike.ride();
    return 0;
}