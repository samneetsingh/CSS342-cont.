#ifndef INT_LIST_H_
#define INT_LIST_H_
#include <iostream>
using namespace std;



class IntList
{
public:
	IntList();
	IntList(const IntList& rhs);
	~IntList();
	bool Insert(int value);
	bool Remove(int value);

	//Overloads
	IntList& operator=(const IntList& rhs);
	friend ostream& operator<<(ostream& stream, const IntList& stack);

private:
	struct Node
	{
		int value = 0;
		Node* next = nullptr;
	};
	Node* head_;
	bool pop(int& value);
};
#endif

