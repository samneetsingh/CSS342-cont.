#include "int_list.h"

IntList::IntList() : head_(nullptr)
{
}

IntList::IntList(const IntList& source) : head_(nullptr)
{
	*this = source;
}

IntList::~IntList()
{
	int a;
	while (pop(a));
}

bool IntList::pop(int& value)
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

ostream& operator<<(ostream& stream, const IntList& stack)
{
	IntList::Node* p_node = stack.head_;
	while (p_node != nullptr)
	{
		stream << p_node->value << " ";
		p_node = p_node->next;
	}
	return stream;
}


IntList& IntList::operator=(const IntList& source)
{
	if (this == &source)
	{
		return *this;
	}

	int a;
	while (this->pop(a));

	if (source.head_ == nullptr)
	{
		return *this;
	}

	Node* d_node;
	Node* s_node;
	d_node = new Node;
	d_node->value = (source.head_)->value;
	this->head_ = d_node;
	s_node = (source.head_)->next;
	while (s_node != nullptr)
	{
		d_node->next = new Node;
		d_node->next->value = s_node->value;
		d_node = d_node->next;
		s_node = s_node->next;
	}
	return *this;
}

/* No Duplicates */
bool IntList::Insert(int value)
{
	//empty list
	if (head_ == nullptr)
	{
		head_ = new Node;
		head_->value = value;
		return true;
	}

	//first in-line
	if (value < head_->value)
	{
		Node* ins_node = new Node;
		ins_node->value = value;
		ins_node->next = head_;
		head_ = ins_node;
		return true;
	}
	if (value == head_->value)
	{
		return false;
	}

	Node* p_node = head_;
	while ((p_node->next != nullptr) && (p_node->next->value < value))
	{
		p_node = p_node->next;
	}
	if ((p_node->next != nullptr) && (p_node->next->value == value))
	{
		return false;
	}
	Node* ins_node = new Node;
	ins_node->value = value;
	ins_node->next = p_node->next;
	p_node->next = ins_node;
	return true;
}

bool IntList::Remove(int value)
{
	if (head_ == nullptr)
	{
		return false;
	}
	if (head_->value == value)
	{
		Node* temp = head_;
		head_ = head_->next;
		delete temp;
		return true;
	}
	Node* p_node = head_;
	while ((p_node->next != nullptr) && (p_node->next->value < value))
	{
		p_node = p_node->next;
	}
	if (p_node->next == nullptr)
	{
		return false;
	}
	if (p_node->next->value == value)
	{
		Node* temp = p_node->next;
		p_node->next = p_node->next->next;
		delete temp;
		return true;
	}
	return false;
}
