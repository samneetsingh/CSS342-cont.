// 
// Working example showing copy constructor and operator= overloads
//

#include <iostream>
#include "bird.h"
using namespace std;

int main()
{
	Bird b1("eagle", 123);
	Bird b2;
	cout << "bird b1: " << b1;
	cout << "bird b2: " << b2;

	b2 = b1;
	cout << "bird b2 : " << b2;

	Bird b3 = b1;
	cout << "bird b3: " << b3;
}

