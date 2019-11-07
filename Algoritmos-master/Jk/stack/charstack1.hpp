#ifndef __vector__hpp
#define __vector__hpp

#include<stdexcept>
using namespace std;

const int INITIAL_CAPACITY = 10;

class CharStack{
private:
  char *elements; //array
  int capacity; //Allocated size
  int count; //Curremt No. of elements

public:
  CharStack();//empty
  ~CharStack(); //empty

  int size();
  void clear();
  bool empty();
  char top();
  void expandCapacity();
  void push(char c);
  char pop();
};

#endif
