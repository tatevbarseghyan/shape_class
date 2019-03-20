#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
    private:
        std::string m_name;
        std::string m_color;
    public:
        Shape(std::string name, std::string color);
        std::string get_name();
        std::string get_color();
        virtual double get_area() = 0;
        virtual ~Shape();
};


#endif
