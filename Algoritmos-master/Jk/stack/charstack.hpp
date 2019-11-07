#ifndef __vector__hpp
#define __vector__hpp

#include<vector>
#include<stdexcept>
using namespace std;

class CharStack{
private:
  vector<char> elements;

public:
  CharStack(){} //empty
  ~CharStack(){} //empty

  int size();
  void clear();
  bool empty();
  char top();
  void push(char c);
  char pop();
};

#endif
