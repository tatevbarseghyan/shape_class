#include <iostream>
#include "RectangleClass.hpp"

Rectangle::Rectangle(std::string name, std::string color, double width, double height) 
    : Shape(name, color)
{
    m_width = width;
    m_height = height;
}
double Rectangle::get_area()
{
    return m_width * m_height;
}
Rectangle::~Rectangle()
{
    std::cout << "Rectangle deleted" << std::endl;
}

