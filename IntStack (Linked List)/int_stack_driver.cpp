// int_stack_driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "int_stack.h"
using namespace std;

int main()
{
    int a = 0;

    IntStack st;
    IntStack st2;

    //Push and Pop into one stack
    st.Push(9); st.Push(8); st.Push(7);
    st.Pop(a);
    st.Push(87); st.Push(9); st.Push(8);
    st.Push(7); st.Push(32);
    st.Pop(a);
    cout << st << endl;

    //Assignment 
    st2 = st;
    cout << st2 << endl;
    st2.Pop(a);
    cout << st << endl;

    //Copy Constructor
    IntStack st3 = st2;
    cout << st3 << endl;
}
