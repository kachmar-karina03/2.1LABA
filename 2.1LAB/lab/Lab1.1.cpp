//Lab1.1.cpp
#include <iostream>
#include "Point.h"

using namespace std;

Point makePoint() {
	Point t;
	cin >> t;
	return t;
}

int main()
{
	Point z1 = makePoint();
	Point z2 = makePoint();
	Point t;

	cout << z1++ << endl;
	cout << z1 << endl;
	cout << ++z1 << endl;
	cout << z1 << endl;

	t = z1 - z2;

	cout << t << endl;

	cout << t.distance() << endl;

	cin.get();
	system("pause");
	return 0;
}