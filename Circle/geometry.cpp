// geometry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "circle.h"
using namespace std;

int main()
{

	// Creat some circles
	Circle c1;
	cout << "Circle 1: " << c1 << endl;
	Circle c2(4.5);
	cout << "Circle 2: " << c2 << endl;
	Circle c3(Point{4, 7});
	cout << "Circle 3: " << c3 << endl;
	Circle c4(Point{ -3, -5 }, 5);
	cout << "Circle 4: " << c4 << endl;

	// Move circle and print it again
	c4.Move(3, -2);
	cout << "Circle 4: " << c4 << endl;

}
