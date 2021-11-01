//Point.cpp
#include "Point.h"
#include <cmath>
#include <sstream>

using namespace std;


Point::Point(double first, double second) 
{
	x = first;
	y = second;
}

Point::Point(const Point& t) {
	x = t.x;
	y = t.y;
}


void Point::SetX(double value) {
	x = value;
}

void Point::SetY(double value) {
	y = value;
}

Point& Point::operator = (const Point& t) {
	x = t.x;
	y = t.y;

	return *this;
}


Point::operator string () const {
	stringstream ss;
	ss << " x = " << x << endl;
	ss << " y = " << y << endl;
	return ss.str();
}

Point operator + (Point& t1, Point& t2) {
	return Point(t1.x + t2.x, t1.y + t2.y);
}

Point operator - (Point& t1, Point& t2) {
	return Point(t1.x - t2.x, t1.y - t2.y);
}

ostream& operator << (ostream& out, const Point t) {
	out << string(t);
	return out;
}

istream& operator >> (istream& in, Point& t) {
	cout << "x = "; in >> t.x;
	cout << "y = "; in >> t.y;
	return in;
}

Point& Point::operator ++ () {
	x++;
	return *this;
}

Point& Point::operator -- () {
	x--;
	return *this;
}

Point Point::operator ++ (int) {
	Point t(*this);
	y++;
	return t;
}

Point Point::operator -- (int) {
	Point t(*this);
	y--;
	return t;
}

double Point::distance() {
	return sqrt(x * x + y * y);
}

