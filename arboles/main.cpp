#include"arboles.hpp"
#include<iostream>
using namespace std;

int main(){
  BST<int> tumadre;
  tumadre.insertNode(10);
  tumadre.insertNode(9);
  tumadre.insertNode(11);
  tumadre.insertNode(14);
  tumadre.insertNode(13);
  tumadre.insertNode(8);
  tumadre.insertNode(15);
  cout << endl;
  tumadre.displayNode();

  tumadre.findNode2(11);
  cout << endl;

  return 0;
}
