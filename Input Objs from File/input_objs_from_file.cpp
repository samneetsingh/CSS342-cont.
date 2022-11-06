/// Templated function which reads from a file a class. 
// User must input a file name which has Birds (strings and ints)
// For instance: 
//     eagle 7
//     owl 8
// This code works on Windows.  Shows overloading input, templating, and reading from a file.

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "bird.h"
using namespace std;

template <class T>
vector<T> ReadFileIn(string file_name);

int main(int argc, char* argv[])
{
	string file_name;
//	vector<string> our_input;
//	vector<int> numbers;
	vector<Bird> birds;

	cout << "Input the name of the file to read from: ";
	cin >> file_name;

	birds = ReadFileIn<Bird>(file_name);

	cout << "Birds in File" << endl;

	for (int i = 0; i < birds.size(); i++)
	{
		cout << (birds.at(i)).name() << endl;
	}
}

template <class T>
vector<T> ReadFileIn(string file_name)
{
	ifstream in_file;
	T temp;
	vector<T> vec;

	in_file.open(file_name);
	while (!in_file.eof())
	{
		in_file >> temp;
		vec.push_back(temp);
	}
	in_file.close();
	return vec;
}
