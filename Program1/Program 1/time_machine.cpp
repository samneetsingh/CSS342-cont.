//Samneet Singh
//10/09/2022
//CSS342 - Data Structures
//Program 1 : time_machine.cpp
#include"time_span.h"
#include<iostream>
using namespace std;

int main(){

    //test setters
    TimeSpan dur1(77.4, 15, 6), dur2(127.86), dur3(8, -23, 0), dur4(0, 0, 0);
    TimeSpan dur5(-3, 73, 2), dur6(7, 35, 120), dur7, dur8;

    // test operators pt1

    //test addition
    dur7 = dur1 + dur3;

    //test subtraction
    dur8 = dur7 - dur3;

    // test methods
    cout << dur1 << endl;
    cout << dur1.getHours() << endl;
    cout << dur1.getMinutes() << endl;
    cout << dur1.getSeconds() << endl;
    cout << dur1.setTime(1, 1, 1) << endl;
    cout << dur1 << endl;

    cout << dur1 << endl;
    cout << dur2 << endl;
    cout << dur3 << endl;
    cout << dur4 << endl;
    cout << dur5 << endl;
    cout << dur6 << endl;
    cout << dur7 << endl;
    cout << dur8 << endl;

    //test operators
    dur7 += dur3;
    cout << dur3 << endl;
    cout << dur7 << endl;

    dur7 -= dur3;
    cout << dur3 << endl;
    cout << dur7 << endl;

    if (dur3 != dur6)
    {
        cout << "Durations are different." << endl;
    }
    else
    {
        cout << "Durations are the same" << endl;
    }

    if(dur3 > dur6) {
        cout << "Duration 3 is greater" << endl;
    } else {
        cout << "Duration 3 is not greater" << endl;
    }
    if(dur3 >= dur6) {
        cout << "Duration 3 is greater than or equal to" << endl;
    } else {
        cout << "Duration 3 is not greater than or equal to" << endl;
    }
    if(dur3 < dur6) {
        cout << "Duration 3 is smaller" << endl;
    } else {
        cout << "Duration 3 is not smaller" << endl;
    }
    if(dur3 <= dur6) {
        cout << "Duration 3 is smaller than or equal to" << endl;
    } else {
        cout << "Duration 3 is not smaller than or equal to" << endl;
    }
}