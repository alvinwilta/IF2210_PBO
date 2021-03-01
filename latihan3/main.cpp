#include "Jam.h"
#include<iostream>
#include "MinArray.cpp"
#include "PrintArray.cpp"
#include "Jam.h"
#include "Point.h"
using namespace std;

int main()
{	
	int arrayInt[7] = {5, 10, 2, 4, 0, 2, -4};
	double arrayReal[5] = {6.4, 2.1, 0.2, -5.2, 1.1};
	char arrayChar[7] = "abcdef";
	
	cout << "MinArray" << endl;
	cout << MinArray<int>(arrayInt, 7) << endl;
	cout << MinArray<double>(arrayReal, 5) << endl;
	
	Jam* arrayJam = new Jam[50];
	Jam a(13, 13, 0);
	Jam b(13, 13, 13);
	Jam c(14, 14, 14);
	Jam d(13, 12, 59);

	arrayJam[0] = a;
	arrayJam[1] = b;
	arrayJam[2] = c;
	arrayJam[3] = d;
	cout << MinArray(arrayJam, 4) << endl;

	cout << "PrintArray" << endl;

	Point* arrayPoint = new Point[50];
	Point p(0,0);
	Point q(1,2);
	Point r(2,1);
	Point s(3,2);
	Point t(5,5);

	arrayPoint[0] = p;
	arrayPoint[1] = q;
	arrayPoint[2] = r;
	arrayPoint[3] = s;
	arrayPoint[4] = t;

	PrintArray<int>(arrayInt, 7);
	PrintArray<double>(arrayReal, 5);
	PrintArray<char>(arrayChar, 6);
	PrintArray(arrayPoint, 5);
}
