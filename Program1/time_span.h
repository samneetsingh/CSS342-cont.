//Samneet Singh
//10/09/2022
//CSS342 - Data Structures
//Program 1 : time_span.h

#ifndef TIMESPAN_H
#define TIMESPAN_H


#include<iostream>
using namespace std;

class TimeSpan{

    //Data members
    int hours;
    int minutes;
    int seconds;

    //Member functions
public:

    //setters
    TimeSpan(double, double, double);
    TimeSpan(double, double);
    TimeSpan(double);
    TimeSpan();

    //getters-setters
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
    bool setTime(int, int, int);

    //operators
    TimeSpan operator +(const TimeSpan&);
    TimeSpan operator -(const TimeSpan&);
    TimeSpan operator- ();
    bool operator ==(const TimeSpan&);
    bool operator !=(const TimeSpan&);
    bool operator <(const TimeSpan&);
    bool operator <=(const TimeSpan&);
    bool operator >(const TimeSpan&);
    bool operator >=(const TimeSpan&);
    void operator +=(const TimeSpan&);
    void operator -=(const TimeSpan&);
    friend ostream &operator<<( ostream &, const TimeSpan&);
    friend istream &operator>>( istream &, TimeSpan&);
};

#endif