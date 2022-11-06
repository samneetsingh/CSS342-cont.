// templatized_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "sorted_list.h"
using namespace std;

int main()
{
	SortedList<string> teams;
	teams.Add("white sox");
	teams.Add("astros");
	teams.Add("cubs");
	teams.Add("blue jays");
	teams.Print();
	teams.Sort();
	cout << endl;
	teams.Print();
}
