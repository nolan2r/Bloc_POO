#pragma once

#include "Point2.h"
#include "Vector2.h"
#include <iostream>

enum IntersectionStatus {
  POINT,
  COLINEAR_INTERSECTING,
  COLINEAR_NON_INTERSECTING,
  PARALLEL_NON_INTERSECTING,
  NON_INTERSECTING
};

class Segment2 {
private:
  Point2 origin;
  Vector2 direction;
public:
  Segment2(Point2 s_origin, Vector2 s_direction);

  Point2 getOrigin() const;
  Vector2 getDirection() const;
  
  IntersectionStatus intersect(Segment2 r, Point2 &p);
};