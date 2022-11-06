//
//  Code showing a queue implemetation using a vector as data structure
//

#include <iostream>
#include "my_queue.h"
#include "queue_ll.h"
using namespace std;

int main()
{
//	MyQueue q;
	QueueLL q;

	for (int i = 0; i < 54; i++)
	{
		q.Push(i);
	}
	cout << q << endl;
	cout << "Number items in queue: " << q.count() << endl;
	cout << "Front of queue: " << q.Front() << endl;
	cout << "Back of queue: " << q.Back() << endl;
	cout << "Pop two items...." << endl << endl;
	q.Pop();
	q.Pop();
	cout << "Number items in queue: " << q.count() << endl;
	cout << "Front of queue: " << q.Front() << endl;
	cout << "Back of queue: " << q.Back() << endl;
	cout << q << endl;

	QueueLL q2 = q;
	cout << q2 << endl;
}

