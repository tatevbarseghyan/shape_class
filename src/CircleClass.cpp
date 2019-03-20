#include <iostream>
#include <string>
#include "CircleClass.hpp"

Circle::Circle(std::string name, std::string color, double radius)
    : Shape(name, color)
{
    m_radius = radius;
}
double Circle::get_area()
{
    double pi = 3.14;
    return pi * (m_radius * m_radius);
}
Circle::~Circle()
{
    std::cout << "Circle deleted" << std::endl;
}

