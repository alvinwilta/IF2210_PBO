#ifndef PROPERTY_H
#define PROPERTY_H

#include <string>
using namespace std;

class Property {
  protected: 
  // Atribut
    string name;
    string type; //hotel; hostels; villas; cottages 
    int openYear;
  public:
    // User-defined constructor: set nilai atribut berdasarkan nilai 
    // parameter masukan
    Property(string name, int openYear);

    // Default constructor: set nilai atribut sbb: 
    // name = "noname"; openYear = 1900; type = "none"
    Property();

    // Copy constructor
    Property(const Property& other);

    // Destructor
    // TIDAK PERLU

    // Operator Assignment 

    // ... set_name(...)
    void set_name(string name);

    // ... get_name()
    string get_name() const;

    // ... set_type(...)
    void set_type(string type);

    // ... get_type()
    string get_type() const;

    // ... get_age(), asumsikan tahun saat ini dapat diakses dengan 
    // makro CURRENT_YEAR
    int get_age() const;

    // ... displayInfo(): Mencetak nama, umur, type, dan rate Property
    virtual void displayInfo();

    // ... rate(): menghitung biaya property sesuai dengan umur dan 
    // tergantung type property
    int rate();

};

class Hotel: Property {
private:
    float star;
public:
    Hotel(string name, int openYear);

    void set_star(float star);

    float get_star() const;

    void displayInfo() override;
};

class Hostel: Property {
private:
    int n_fac;
public:
    Hostel(string name, int openYear);

    void set_facility(int facil);

    int get_facility() const;

    int calculateFacility();

    void displayInfo() override;
};
#endif // PROPERTY_H
