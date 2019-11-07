#ifndef __vector__hpp
#define __vector__hpp

class Vector2D{
private:
  double x;
  double y;

public:
  Vector2D();
  ~Vector2D();

  double norm();
  void set_x(double v);
  void set_y(double w);
  double get_x();
  double get_y();
};

#endif
