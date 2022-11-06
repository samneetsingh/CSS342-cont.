#ifndef BIRD_H_
#define BIRD_H_
#include <string>
#include <iostream>
using namespace std;

class Bird
{


public:
    Bird();
    Bird(string n);
    ~Bird();
    string name();
    friend istream& operator>>(istream& stream, Bird& bird);

private:
    string name_;
    int id_;
};
#endif

