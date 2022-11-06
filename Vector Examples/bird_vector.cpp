// 
// Example showing vectors of Bird objects
//

#include "bird.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool IsBirdSmall(const Bird& bird);

int main()
{
	Bird b1("duck");
	Bird b2("goose");
	vector<Bird> flock;		//empty vector of birds
	vector<Bird> alfred_flock(4, b1); //4 ducks
	alfred_flock .push_back(b2);

	for (unsigned int i = 0; i < alfred_flock.size(); i++)
	{
		cout << alfred_flock.at(i).name() << endl;
	}
}

bool IsBirdSmall(const Bird& bird)
{
	if (bird.wingspan_ < 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}
