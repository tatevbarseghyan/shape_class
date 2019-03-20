#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "ShapeClass.hpp"
class Rectangle : public Shape
{
    private:
        double m_width;
        double m_height;
    public:
        Rectangle(std::string name, std::string color, double width, double height);
        double get_area();
        ~Rectangle();
};

#endif

