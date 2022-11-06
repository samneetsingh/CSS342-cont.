#ifndef QUEUE_L_L_H_
#define QUEUE_L_L_H
#include <iostream>
using namespace std;

// A queue based on a linked list implementation
class QueueLL
{
public:
	QueueLL();
	QueueLL(const QueueLL& rhs);
	~QueueLL();
	int Pop() throw (exception);
	void Push(int value);
	int Front() const throw (exception);
	int Back() const throw (exception);

	int count() const;
	bool IsEmpty() const;
	QueueLL& operator=(const QueueLL& rhs);
	friend ostream& operator<<(ostream& stream, const QueueLL& rhs);

private:
	struct Node
	{
		int value;
		Node* next = nullptr;
	};
	Node* front_;
	Node* back_;
	int count_;
};
#endif

