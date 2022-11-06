#ifndef BIRD_H_
#define BIRD_H_
#include <string>
#include <iostream>
using namespace std;

class Bird
{
public:
	//constructors-destructors
	Bird();
	Bird(string name, int id);
	Bird(const Bird& bird);
	~Bird();

	//getters-setters
	string name() const;
	int wingspan() const;
	int id() const;
	void set_name(const string& name);
	void set_wingspan(int wingspan);
	void set_id(int id);

	//overload operators
	Bird& operator=(const Bird& bird);
	friend ostream& operator<<(ostream& outStream, const Bird& b);

private:
	string name_;
	int wingspan_;
	int id_;
};
#endif

