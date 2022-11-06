#include "circle.h"

//Constructors
Circle::Circle() : center_(Point{0, 0}), radius_(1)
{
}

Circle::Circle(float radius) : center_(Point{ 0, 0 }), radius_(radius)
{
    if (radius <= 0)
    {
        radius_ = 1;
    }
}

Circle::Circle(Point center) : center_(center), radius_(1)
{
}

Circle::Circle(Point center, float radius) : center_(center), radius_(radius)
{
}

//getters-setters
Point Circle::center() const
{
    return center_;
}

float Circle::radius() const
{
    return radius_;
}

bool Circle::set_radius(const float& radius)
{
    if (radius <= 0)
    {
        return false;
    }
    radius_ = radius;
    return true;
}

bool Circle::set_center(const Point& center)
{
    center_ = center;
    return true;
}

//Actions
float Circle::Area() const
{
    return (kPi * radius_ * radius_);
}

float Circle::Circumference() const
{
    return (2 * kPi * radius_);
}

Point Circle::Move(const float& x, const float& y)
{
    center_.x += x;
    center_.y += y;
    return center_;
}

ostream& operator<<(ostream& stream, const Circle& circle)
{
    stream << "(" << circle.center_.x << " , " << circle.center_.y << "). Radius = " << circle.radius_;
    return stream;
}


