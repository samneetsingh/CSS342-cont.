#include "queue_ll.h"

QueueLL::QueueLL() : front_(nullptr), back_(nullptr), count_(0)
{
}

QueueLL::QueueLL(const QueueLL& rhs) : front_(nullptr), back_(nullptr), count_(0)
{
	*this = rhs;
}

//Free all space in the queue
QueueLL::~QueueLL()
{
	while (count() > 0)
	{
		Pop();
	}
}

//Remove and return first item in queue
int QueueLL::Pop() throw(exception)
{
	if (count_ == 0)
	{
		throw exception("Queue is empty");
	}
	Node* temp = front_;
	int return_val = temp->value;
	front_ = front_->next;
	delete temp;
	//reset back pointer if count == 1
	if (count_ == 1)
	{
		back_ == nullptr;
	}
	count_--;
	return return_val;

}

void QueueLL::Push(int value)
{
	Node* ins_node;
	ins_node = new Node;
	ins_node->value = value;
	if (count_ == 0)
	{
		back_ = ins_node;
		front_ = ins_node;
	}
	else
	{
		back_->next = ins_node;
		back_ = ins_node;
	}
	count_++;
}

int QueueLL::Front() const throw(exception)
{
	if (count_ == 0)
	{
		throw exception("Queue is empty");
	}
	return front_->value;
}

int QueueLL::Back() const throw(exception)
{
	if (count_ == 0)
	{
		throw exception("Queue is empty");
	}
	return back_->value;
}

int QueueLL::count() const
{
	return count_;
}

bool QueueLL::IsEmpty() const
{
	return (count_ == 0);
}

ostream& operator<<(ostream& stream, const QueueLL& q)
{
	//empty queue don't print anything out
	if (q.count() != 0)
	{
		QueueLL::Node* p_node = q.front_;
		while (p_node != nullptr)
		{
			stream << p_node->value << " ";
			p_node = p_node->next;
		}
	}
	return stream;
}

// Deep copy of queue
QueueLL& QueueLL::operator=(const QueueLL& rhs)
{
	// Assignign queue to self
	if (this == &rhs)
	{
		return *this;
	}
	//Empty out destination queue
	while (count() > 0)
	{
		Pop();
	}
	//if rhs is empty return
	if (rhs.count() == 0)
	{
		return *this;
	}
	//Deep copy
	Node* p_node = rhs.front_;
	Node* d_node = new Node;
	d_node->value = p_node->value;
	this->front_ = d_node;
	while (p_node->next != nullptr)
	{
		p_node = p_node->next;
		d_node->next = new Node;
		d_node = d_node->next;
		d_node->value = p_node->value;
	}
	this->back_ = d_node;
	this->count_ = rhs.count();
	return *this;
}
