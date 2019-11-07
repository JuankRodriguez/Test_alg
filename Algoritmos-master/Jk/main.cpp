#include"vector.hpp"
#include<iostream>
using namespace std;

int main(){
  Vector2D myVec;

  myVec.set_x(2.);
  myVec.set_y(2.);
  cout << myVec.get_x() << endl;
  cout << myVec.get_y() << endl;

  cout << myVec.norm() << endl;

  return 0;
}
