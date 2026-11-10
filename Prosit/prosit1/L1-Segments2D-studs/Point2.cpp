#include "Point2.h"


Point2::Point2() {
    x=0;
    y=0;
}

Point2::Point2(float px, float py){
    x=px;
    y=py;
}

float Point2::getX() const {
    return x;
}

float Point2::getY() const {
    return y;
}

void Point2::setX(float px) {
    x=px;
}

void Point2::setY(float py) {
    y=py;
}
void Point2::print() const {
    std::cout<<"("<<x<<","<<y<<")"<<std::endl;
}

Vector2 Point2::sub(Point2 r) const {
    return Vector2(x-r.getX(),y-r.getY());
}


Point2 Point2::add(Vector2 r) const {
    return Point2(x+r.getX(),y+r.getY());
}
