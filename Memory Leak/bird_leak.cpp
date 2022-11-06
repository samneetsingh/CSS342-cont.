// 
// Code illustrating a memory leak

#include <iostream>
#include "bird.h"
using namespace std;

Bird* CreateFlock(int size, string name);

int main()
{
	int size;
	string bird_name;
	Bird* flock;

	cout << "Create a flock.  Input the name: ";
	cin >> bird_name;
	cout << "Input size: ";
	cin >> size;

	while (true)
	{
		flock = CreateFlock(size, bird_name);
		// remove the following line to cause the leak
		delete[] flock;
	}
	return 0;
}

Bird* CreateFlock(int num, string name)
{
	Bird* pBird;

	pBird = new Bird[num];
	for (int i = 0; i < num; i++)
	{
		pBird[i].set_name(name);
		pBird[i].set_id(i);
	}
	return pBird;
}
