#ifndef BIRD_H_
#include <iostream>
#include <string>
using namespace std;
class Bird
{
public:
	Bird();
	Bird(string name, int ID);

	// getters-setters
	int id() const;
	void set_flu(bool);
	void set_name(const string& name);
	void set_id(int);

private:
	string name_;
	bool flu_;
	int id_;
};
#endif

