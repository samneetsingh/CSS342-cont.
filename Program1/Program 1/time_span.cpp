//Samneet Singh
//10/09/2022
//CSS342 - Data Structures
//Program 1 : time_span.cpp

#include "time_span.h"
#include<iostream>
using namespace std;

//setter methods
TimeSpan :: TimeSpan(double h, double m, double s){
    hours = h;
    minutes = m;
    seconds = s;
}

TimeSpan :: TimeSpan(double m, double s){
    hours = 0;
    minutes = m;
    seconds = s;
}

TimeSpan :: TimeSpan(double s){
    hours = 0;
    minutes = 0;
    seconds = s;
}

TimeSpan :: TimeSpan(){
    hours = 0;
    minutes = 0;
    seconds = 0;
}


//getters-setters
int TimeSpan :: getHours() const{
    return hours;
}
int TimeSpan :: getMinutes() const{
    return minutes;
}
int TimeSpan :: getSeconds() const{
    return seconds;
}
bool TimeSpan :: setTime(int h, int m, int s){
    hours = h;
    minutes = m;
    seconds = s;
    return true;
}

//operators
TimeSpan TimeSpan :: operator +(const TimeSpan& obj){
    TimeSpan timespan;
    timespan.hours = hours + obj.hours;
    timespan.minutes = minutes + obj.minutes;
    timespan.seconds = seconds + obj.seconds;

    if(timespan.seconds > 60){
        timespan.seconds -= 60;
        timespan.minutes += 1;
    }
    if(timespan.minutes > 60){
        timespan.minutes -= 60;
        timespan.hours += 1;
    }

    return timespan;
}

TimeSpan TimeSpan :: operator -(const TimeSpan& obj){
    TimeSpan timespan;
    timespan.hours = hours - obj.hours;
    timespan.minutes = minutes - obj.minutes;
    timespan.seconds = seconds - obj.seconds;

    if(timespan.seconds < -60){
        timespan.seconds += 60;
        timespan.minutes -= 1;
    }
    if(timespan.minutes < -60){
        timespan.minutes += 60;
        timespan.hours -= 1;
    }

    return timespan;
}

TimeSpan TimeSpan :: operator- (){
    minutes = -minutes;
    seconds = -seconds;
    return TimeSpan(hours, minutes, seconds);
}

bool TimeSpan :: operator ==(const TimeSpan& obj){
    return hours == obj.hours && minutes == obj.minutes && obj.seconds;
}

bool TimeSpan :: operator !=(const TimeSpan& obj){
    return !(hours == obj.hours && minutes == obj.minutes && obj.seconds);
}
bool TimeSpan :: operator >(const TimeSpan& obj){
    if(hours > obj.hours) {
        return true;
    } else if(hours == obj.hours) {
        if(minutes > obj.minutes) {
            return true;
        } else if(minutes == obj.minutes) {
            if(seconds > obj.seconds) {
                return true;
            }
        }
    }
    return false;
}
bool TimeSpan :: operator >=(const TimeSpan& obj){
    if (hours == obj.hours && minutes == obj.minutes && obj.seconds) {
        return true;
    } else if(hours > obj.hours) {
        return true;
    } else if(hours == obj.hours) {
        if(minutes > obj.minutes) {
            return true;
        } else if(minutes == obj.minutes) {
            if(seconds > obj.seconds) {
                return true;
            }
        }
    }
    return false;

}
bool TimeSpan :: operator <(const TimeSpan& obj){
    if(hours < obj.hours) {
        return true;
    } else if(hours == obj.hours) {
        if(minutes < obj.minutes) {
            return true;
        } else if(minutes == obj.minutes) {
            if(seconds < obj.seconds) {
                return true;
            }
        }
    }
    return false;
}
bool TimeSpan :: operator <=(const TimeSpan& obj){
    if (hours == obj.hours && minutes == obj.minutes && obj.seconds) {
        return true;
    } else if(hours < obj.hours) {
        return true;
    } else if(hours == obj.hours) {
        if(minutes < obj.minutes) {
            return true;
        } else if(minutes == obj.minutes) {
            if(seconds < obj.seconds) {
                return true;
            }
        }
    }
    return false;
}
void TimeSpan :: operator +=(const TimeSpan& obj){
    hours = hours + obj.hours;
    minutes = minutes + obj.minutes;
    seconds = seconds + obj.seconds;

    if(seconds > 60){
        seconds -= 60;
        minutes += 1;
    }
    if(minutes > 60){
        minutes -= 60;
        hours += 1;
    }
}
void TimeSpan :: operator -=(const TimeSpan& obj){
    hours = hours - obj.hours;
    minutes = minutes - obj.minutes;
    seconds = seconds - obj.seconds;

    if(seconds < -60){
        seconds += 60;
        minutes -= 1;
    }
    if(minutes < -60){
        minutes += 60;
        hours -= 1;
    }
}

ostream &operator<<( ostream &output, const TimeSpan& obj){
    output<<"Hours: "<<obj.getHours()<<", Minutes: "<<obj.getMinutes()<<", Seconds: "<<obj.getSeconds();
    return output;
}

istream &operator>>( istream &input, TimeSpan& obj){
    double h,m,s;
    input>>h>>m>>s;
    obj.setTime(h,m,s);
    return input;
}