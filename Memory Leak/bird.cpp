#include "bird.h"

Bird::Bird()
{
	id_ = -1;
}

Bird::Bird(string name, int id)
{
	name_ = name;
	id_ = id;
}

int Bird::id() const
{
	return id_;
}

void Bird::set_flu(bool sick)
{
	flu_ = sick;
}

void Bird::set_name(const string& name)
{
	name_ = name;
}

void Bird::set_id(int id)
{
	id_ = id;
}
