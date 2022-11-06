#ifndef SORTED_LIST_CPP_
#define SORTED_LIST_CPP_
#include "sorted_list.h"

template<class T>
SortedList<T>::SortedList() 
{ 
}

template<class T>
void SortedList<T>::Add(const T& item)
{
    list_.push_back(item);
}

template<class T>
void SortedList<T>::Print() const
{
    for (int i = 0; i < list_.size(); i++)
    {
        cout << list_[i] << endl;
    }
}

template<class T>
void SortedList<T>::Sort()
{
    for (int place = 1; place < list_.size(); place++)
    {
        T temp = list_[place];
        int i = place;
        while ((i > 0) && (list_[i - 1] > temp))
        {
            list_[i] = list_[i - 1];
            i--;
        }
        list_[i] = temp;
    }
}

#endif

