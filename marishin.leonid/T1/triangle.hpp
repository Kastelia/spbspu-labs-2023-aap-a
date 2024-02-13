#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shape.hpp"
#include "base-types.hpp"
#include "scaleRectangle.hpp"

namespace marishin
{
  class Triangle: public Shape
  {
  public:
    Triangle(point_t first, point_t second, point_t third);
    virtual double getArea() const;
    virtual rectangle_t getFrameRect() const;
    virtual void move(point_t newPos);
    virtual void move(double dx, double dy);
    virtual void scale(double factor);
  private:
    point_t first_;
    point_t second_;
    point_t third_;
  };
}

#endif
