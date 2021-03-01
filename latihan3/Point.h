#ifndef POINT_H
#define POINT_H

#include "iostream"
using namespace std;

class Point
{
	private :
		int X;
		int Y;
	public :
		friend ostream& operator<< (ostream& out, const Point& p);
		Point();
		Point(int X, int Y);
		Point(const Point& p);
		void operator=(const Point& j);
		~Point();
};

# endif
