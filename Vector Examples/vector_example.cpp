// 
// Exmple showing vector usage with integers
//

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> first;	//empty vector 
	vector<int> second = { 100, 200, 300 };	//vector of 100,200,300
	vector<int> third = second;	//copy of second vecotry
	vector<int> fourth(4, 100);	//vector of 4, 100s
	second.push_back(400);

	for (int i = 0; i < second.size(); i++)
	{
		cout << "val[" << i << "] = " << second[i] << endl;
		cout << "val[" << i << "] = " << second.at(i) << endl;
	}
}

