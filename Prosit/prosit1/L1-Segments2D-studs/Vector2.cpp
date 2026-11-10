#include "Vector2.h"

float Vector2::getX() const {
    return x;
}

float Vector2::getY() const {
    return y;
}

Vector2::Vector2(){
    x=0;
    y=0;
}

Vector2::Vector2(float px, float py){
        x=px;
        y=py;
}

float Vector2::norm() const {
    return sqrt(x*x+y*y);
}

float Vector2::dot(const Vector2 r) const {
    return x * r.getX() + y * r.getY();

}

Vector2 Vector2::dot(float u) const {
    return Vector2(u*x,u*y);
}

float Vector2::cross(const Vector2 r) const {
    return (x * r.getY()) - (y * r.getX());

}

Vector2 Vector2::negate() const {
    return Vector2(-x,-y);
}

