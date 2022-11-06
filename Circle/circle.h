#ifndef CIRCLE_H_
#define CIRCLE_H_
#include <iostream>
using namespace std;

struct Point
{
    float x;
    float y;
};
const float kPi = (float) 3.14159;

class Circle
{
public:
    //constructors
    Circle();
    Circle(float radius);
    Circle(Point center);
    Circle(Point center, float Radius);
    
    //getters-setters
    Point center() const;
    float radius() const;
    bool set_radius(const float& radius);
    bool set_center(const Point& center);

    //actions
    float Area() const;
    float Circumference() const;

    //Move circle x up and y over; return new center
    Point Move(const float& x, const float& y);

    //overloads
    friend ostream& operator<<(ostream& stream, const Circle& circle);

    private:
        float radius_;
        Point center_;
};
#endif

