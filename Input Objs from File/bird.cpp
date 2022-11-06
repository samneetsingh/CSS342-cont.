
#include "bird.h"

Bird::Bird()
{
	name_ = " ";
	id_ = 0;
}

Bird::Bird(string n)
{
	name_ = n;
}

string Bird::name()
{
	return name_;
}

istream& operator>>(istream& inStream, Bird& b)
{

	inStream >> b.name_;
	inStream >> b.id_;
	return inStream;
}

Bird::~Bird()
{
}
