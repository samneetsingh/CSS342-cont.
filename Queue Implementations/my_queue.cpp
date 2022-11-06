#include "my_queue.h"


// Start queue with fixed vector; only grow if the vector is full
MyQueue::MyQueue() : count_(0), back_(kStartingQueueSize - 1), front_(0)
{
	vec_.resize(kStartingQueueSize);
}

// Number of items in queue
int MyQueue::count() const
{
	return count_;
}

bool MyQueue::IsEmpty() const
{
	return (count_ == 0);
}

// Call when the vector is full
// Double size of queue
// if back_ is < front_ then items are wrapped aournd end of vector to
// beginning so have to copy these elements to end
void MyQueue::doubleQueueSize()
{
	int previous_size = vec_.size();
	vec_.resize(2 * previous_size);
	if (back_ < front_)
	{
		for (int i = 0; i <= back_; i++)
		{
			vec_[previous_size + i] = vec_[i];
		}
	}
}

// Remove and return first item in queue
int MyQueue::Pop() throw (exception)
{
	if (IsEmpty())
	{
		throw exception("Queue is Empty");
	}
	else
	{
		int return_val = vec_[front_];
		front_ = (front_ + 1) % vec_.size();
		count_--;
		return return_val;
	}
}

// Put integer at front of queue
void MyQueue::Push(int value)
{
	if (count_ == vec_.size())
	{
		doubleQueueSize();
	}
	back_ = (back_ + 1) % vec_.size();
	vec_[back_] = value;
	count_++;
}

// Peek first item in queue
int MyQueue::Front() const throw (exception)
{
	if (IsEmpty())
	{
		throw exception("Queue is Empty");
	}
	else
	{
		return vec_[front_];
	}
}

// Peek last item in queue
int MyQueue::Back() const throw (exception)
{
	if (IsEmpty())
	{
		throw exception("Queue is Empty");
	}
	else
	{
		return vec_[back_];
	}
}

ostream& operator<<(ostream& stream, const MyQueue& q)
{
	for (int i = 0; i < q.count(); i++)
	{
		cout << q.vec_[(q.front_ + i) % q.vec_.size()] << " ";
	}
	return stream;
}

