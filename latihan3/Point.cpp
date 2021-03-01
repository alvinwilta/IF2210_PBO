#include "Jam.h"
#include "Point.h"
#include "iostream"
using namespace std;

Point :: Point()
{
	this->X = 0;
	this->Y = 0;
}

Point :: Point(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}

Point :: Point(const Point& p)
{
	this->X = p.X;
	this->Y = p.Y;
}

void Point :: operator = (const Point& p)
{
	this->X = p.X;
	this->Y = p.Y;
}

Point :: ~Point()
{
}

ostream& operator<< (ostream& out, const Point& p)
{
	out << "(" << p.X << "," << p.Y << ")";
	return out;
}
