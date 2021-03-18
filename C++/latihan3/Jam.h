#ifndef JAM_H
#define JAM_H

#include "iostream"
using namespace std;

class Jam
{
	private :
		int HH;
		int MM;
		int SS;
	public :
		friend ostream& operator<< (ostream& out, const Jam& j);
		Jam();
		Jam(int HH, int MM, int SS);
		Jam(const Jam& j);
		void operator=(const Jam& j);
		bool operator<(const Jam& j);
		~Jam();
};

# endif
