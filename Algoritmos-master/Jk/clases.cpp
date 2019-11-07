#include<iostream>
using namespace std;

struct Point{
  double x;
  double y;
};

class Vector2D{
private:
  double x;
  double y;

public:
  Vector2D();
  ~Vector2D();

  double norm();
};


int main(){
  Point p;
  p.x = 0.;
  p.y = 1.;

  cout << "(" << p.x << "," << p.y << ")" << endl;

  return 0;
}
