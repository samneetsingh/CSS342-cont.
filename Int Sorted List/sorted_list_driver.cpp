// sorted_list_driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "int_list.h"
using namespace std;

int main()
{
    IntList ages;

    //Ask user to input integers and then the list will be created
    int input_int = 1;
    cout << "Input as many positive integers as you like." << endl;
    cout << "When you are done input a negative integer." << endl;
    cout << " >>> ";
    while (input_int >= 0)
    {
        cin >> input_int;
        if (input_int >= 0)
        {
            ages.Insert(input_int);
        }
    }
    cout << "Sorted: " << endl << " " << ages << endl;
    input_int = 1;
    while (input_int > 0)
    {
        cout << "Input a number to remove (negative num indicates completion): ";
        cin >> input_int;
        if (input_int >= 0)
        {
            ages.Remove(input_int);
            cout << " " << ages << endl;
        }
    }
}

