//
// Example illustrating how a templating works on a class
// The sorted list uses a vector and keeps the objects of a type ordered
//

#ifndef SORTED_LIST_H_
#define SORTED_LIST_H_
#include <iostream>
#include <vector>
using namespace std;

template<class T>
class SortedList
{
public:
    SortedList();
    void Add(const T& item);
    void Print() const;
    void Sort();

private:
    vector<T> list_;
};
#include "sorted_list.cpp"
#endif

