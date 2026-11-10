#pragma once

#include <iostream>
#include <math.h>



class Vector2 {
private:
  float x,y;
public:
  float getX() const;
  float getY() const;

  Vector2();
  Vector2(float px, float py);

  float norm() const;
  float dot(const Vector2 r) const;
  Vector2 dot(float u) const;
  float cross(const Vector2 r) const;
  Vector2 negate() const;

};

