#include <iostream>
#include <string>
#include "ShapeClass.hpp"

Shape::Shape(std::string name, std::string color)
{
    m_name = name;
    m_color = color;
}

std::string Shape::get_name()
{
    return  m_name;
}
std::string Shape::get_color()
{
    return m_color;
}
Shape::~Shape()
{
    std::cout << "Shape deleted" << std::endl;
}


