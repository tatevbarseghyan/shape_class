#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "ShapeClass.hpp"
class Circle : public Shape
{
    private:
        double m_radius;
    public:
        Circle(std::string name, std::string color, double radius);
        double get_area();
        ~Circle();
};

#endif
