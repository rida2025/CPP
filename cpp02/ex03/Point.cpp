#include "Point.hpp"

Point::Point(): x(0) ,y(0){
    // std::cout << "Point Deafault constructor called" << std::endl;
}

Point::~Point(){
    // std::cout << "destructor called" << std::endl;
}

Point::Point(int x, int y): x(x), y(y){
    // std::cout << "constructor int parameteras called" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y) {
    // std::cout << "constructor const float parameters called" << std::endl;
}

Point::Point(Point const &cpy_con){
    // std::cout << "copy constructor called" << std::endl;
    *this = cpy_con;
}

Point &Point::operator=(Point const &cpy_asy){
    // std::cout << "copy assignment called" << std::endl;
    (Fixed) this->x = cpy_asy.get_x();
    (Fixed) this->y = cpy_asy.get_y();
    return (*this);
}

float Point::get_x() const{
    return (this->x.toFloat());
}

float Point::get_y() const{
    return (this->y.toFloat());
}

float triangleArea(const Point &a, const Point &b, const Point &c) {
    return (0.5 * ((b.get_x() - a.get_x()) * (c.get_y() - a.get_y()) - (c.get_x() - a.get_x()) * (b.get_y() - a.get_y())));
}

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point){
    
    float area1 = triangleArea(point, a, b);
    float area2 = triangleArea(point, b, c);
    float area3 = triangleArea(point, c, a);

    return (area2 > 0 && area3 > 0 && area1 > 0) || (area2 < 0 && area3 < 0 && area1 < 0);
}
