#include <iostream>
#include "RectangleClass.hpp"
#include "CircleClass.hpp"

int main()
{
//    Rectangle a("name", "yellow", 12,4);
  //  std::cout << a.get_name() << std::endl;
    //Circle c("name1", "black", 2.3);
   // std::cout << c.get_area() << std::endl;

    Shape* p1 = new Rectangle("Name1", "black", 12.5, 5);
    Shape* p2 = new Circle("Name2", "white", 4);
    Shape** arr = new Shape*[2];
    arr[0] = p1;
    arr[1] = p2;
    for (int i = 0; i < 2; ++i) {
        std::cout << arr[i]->get_name() << " " << arr[i]->get_color() << " " << arr[i]->get_area() << std::endl;
       delete arr[i];

    }
}

