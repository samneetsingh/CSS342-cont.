#include "int_stack.h"

IntStack::IntStack() : head_(nullptr)
{
}

IntStack::IntStack(const IntStack &source) : head_(nullptr)
{
	*this = source;
}

IntStack::~IntStack()
{
	int a;
	while (Pop(a));
}

bool IntStack::Push(int value)
{
	Node* insert_node = new Node();
	insert_node->value = value;
	insert_node->next = head_;
	head_ = insert_node;
	return true;
}

bool IntStack::Pop(int& value)
{
	if (head_ == nullptr)
	{
		return false;
	}
	Node* tmp = head_;
	head_ = head_->next;
	value = tmp->value;
	delete tmp;
	return true;
}

IntStack& IntStack::operator=(const IntStack& source)
{
	Node* s_node;   //source Node
	Node* d_node;	//destination Node

	// Check to see if assigning to ourselves and return if so
	if (this == &source)
	{
		return *this;
	}

	//Empty destination stack of elements
	int a;
	while (Pop(a));

	//If souce stack is empty return
	if (source.head_ == nullptr)
	{
		return *this;
	}

	//copy over first node
	d_node = new Node;
	d_node->value = (source.head_)->value;
	head_ = d_node;
	s_node = (source.head_)->next;

	//loop and copy over all other nodes
	while (s_node != nullptr)
	{
		d_node->next = new Node;
		d_node = d_node->next;
		d_node->value = s_node->value;
		s_node = s_node->next;
	}
	return *this;
}

ostream& operator<<(ostream& stream, const IntStack& stack)
{
	Node* p_node = stack.head_;
	while (p_node != nullptr)
	{
		stream << p_node->value << " ";
		p_node = p_node->next;
	}
	return stream;
}
