#include "Property.hpp"
#include <iostream> 
using namespace std; 

int main() {
  Hotel hilton = Hotel("Hotel Hilton", 2000); 
  Hostel vio = Hostel("Hostel Vio", 2003);
  // cetak semua property dan informasi semua property
  // [gunakan Property::displayInfo()]
  hilton.displayInfo();
  vio.displayInfo();
}
