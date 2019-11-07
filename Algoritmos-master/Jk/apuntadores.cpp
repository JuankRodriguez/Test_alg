#include<iostream>
using namespace std;

void foo(int &var){
  var++;
}

int main(){

  // int x = 15;
  // int *id = &x;
  //
  // cout << x << " " << *id << " " << &id << endl;

  // int x = 3;
  // foo(x);
  // cout << x << endl;

  // int list[5] = {1,2,3,4,5};
  // int *p = list;
  // int k = 2;
  //
  // cout << p+k << " = " << &list[k] << endl;
  //
  // int a = 3;
  // int *p = &a;
  // *p = 5;
  // int &b = a;
  // cout << *p << endl;
  // cout << a << endl;
  // cout << b << endl;

  for (unsigned int i = 1; i >0; i++){
    int *ip = new int;
    *ip = 42;
    cout << *ip << endl;

  }

  return 0;
}
