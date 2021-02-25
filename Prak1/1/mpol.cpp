#include <iostream>
#include "Polinom.hpp"

using namespace std;
int main(){
    Polinom p = Polinom(5);
    p.input();
    p.setDerajat(3);
    p.print();
    p.printKoef();
    int x;
    cout << "Masukkan x: ";
    cin >> x;
    cout << p.substitute(x) << endl;
}