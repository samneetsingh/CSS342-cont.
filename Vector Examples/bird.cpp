#include "bird.h"

Bird::Bird() : name_(), weight_(0.0), wingspan_(0.0)
{
}

Bird::Bird(string name) : name_(name), weight_(0.0), wingspan_(0.0)
{
}

string Bird::name() const
{
	return name_;
}

float Bird::weight() const
{
	return weight_;
}

float Bird::wingspan() const
{
	return wingspan_;
}
