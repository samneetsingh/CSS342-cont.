#include "bird.h"

Bird::Bird()
{
	cout << "Default Constructor" << endl;
}

Bird::Bird(string name, int id)
{
	cout << "name, id Constructor" << endl;
	name_ = name;
	id_ = id;
}

//Copy Constructor
Bird::Bird(const Bird& rhs_bird)
{
	*this = rhs_bird;
	cout << "Copy Constructor is running" << endl;
}

//Assignment Operator
Bird& Bird::operator=(const Bird& rhs_bird)
{
	name_ = rhs_bird.name_;
	wingspan_ = rhs_bird.wingspan_;
	id_ = rhs_bird.id_;
	cout << "Assignment" << endl;
	return *this;
}

ostream& operator<<(ostream& stream, const Bird& bird)
{
	stream << bird.name_ << " " << bird.id_ << endl;
	return stream;
}

Bird::~Bird()
{
}

string Bird::name() const
{
	return name_;
}

int Bird::wingspan() const
{
	return wingspan_;
}

int Bird::id() const
{
	return id_;
}

void Bird::set_name(const string& name)
{
	name_ = name;
}

void Bird::set_wingspan(int wingspan)
{
	wingspan_ = wingspan;
}

void Bird::set_id(int id)
{
	id_ = id;
}

