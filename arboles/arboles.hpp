#ifndef __arboles__hpp
#define __arboles__hpp

#include<iostream>
#include<string>
using namespace std;

template<typename T>
struct BSTNode{
  T key;
  BSTNode *left;
  BSTNode *right;
  BSTNode *parent;
};

template<typename T>
class BST{
private:
  BSTNode<T> *root;
  void insertNode(BSTNode<T>* &t,BSTNode<T>* p, T k);
  void destroyRecursive(BSTNode<T> *t);
  void displayNode(BSTNode<T> *t, int count);
  void displayNode(int count);
  BSTNode<T>* findNode(BSTNode<T> *t, T k);
  BSTNode<T>* minimun(BSTNode<T> *t);
  BSTNode<T>* maximum(BSTNode<T> *t);
  BSTNode<T>* predecessor(BSTNode<T> *t);
  BSTNode<T>* sucessor(BSTNode<T> *t);
  BSTNode<T>* removeNode(BSTNode<T>* T, T k);

public:
  BST() {root = nullptr;}
  ~BST() {destroyRecursive(root);}

  void insertNode(T k) {insertNode(root, nullptr, k);}
  void displayNode() {displayNode(root, 0);}
  BSTNode<T>* findNode2(T k);
  BSTNode<T>* minimun2();
  BSTNode<T>* maximum2();

};

template<typename T>
void BST<T>::insertNode(BSTNode<T>* &t,BSTNode<T>* p, T k){
  if(t == nullptr){

    cout << "Estoy agregando " << k << endl;

    t = new BSTNode<T>;
    t->key = k;
    t->parent = p;
    t->left = t->right = nullptr;
  }else{
    if(k != t->key){
      if(k < t->key){
        insertNode(t->left, t, k);
      }else{
        insertNode(t->right, t, k);
      }
    }
  }
}


template<typename T>
void BST<T>::destroyRecursive(BSTNode<T> *t){
  if(t != nullptr){

    cout << "Deleting... " << endl;

    destroyRecursive(t->left);
    destroyRecursive(t->right);
    delete t;
  }
}

template<typename T>
void BST<T>::displayNode(BSTNode<T> *t, int count){
  if(t != nullptr){
    count++;
    displayNode(t->left, count);
    cout << "(" << count-1 << ")"  << t ->key << " " << t-> parent  << " " << endl;
    displayNode(t->right, count);
  }
}

template<typename T>
BSTNode<T>* BST<T>::findNode(BSTNode<T> *t, T k){
  if(t == nullptr) return nullptr;
  if(k == t->key) return t;
  if(k < t->key){
    return findNode(t->left, k);
  }else{
    return findNode(t->right, k);
  }
}

template<typename T>
BSTNode<T>* BST<T>::findNode2(T k){
  return findNode(root, k);
}

template<typename T>
BSTNode<T>* BST<T>::minimun(BSTNode<T> *t){
  while (t->left != nullptr) {
    t = t->left;
  }
  return t;
}

template<typename T>
BSTNode<T>* BST<T>::minimun2(){
  return minimun(root);
}

template<typename T>
BSTNode<T>* BST<T>::maximum(BSTNode<T> *t){
  while (t->right != nullptr) {
    t = t->right;
  }
  return t;
}

template<typename T>
BSTNode<T>* BST<T>::maximum2(){
  return maximum(root);
}

template<typename T>
BSTNode<T>* BST<T>::predecessor(BSTNode<T>* t){
  if(t->key != minimun()){
    if(t->left != nullptr){
      return maximum(t->left);
    }else{
      if(t->parent->right == t){
        return t->parent;
      }else{
        while (t == t->parent->left) {
          t = t->parent;
        }
        t = t->parent;
        return t;
      }
    }
  }
}

template<typename T>
BSTNode<T>* BST<T>::sucessor(BSTNode<T>* t){
  if(t->key != maximum()){
    if(t->rigth != nullptr){
      return minimun(t->parent);
    }else{
      if(t->parent->left == t){
        return t->parent;
      }else{
        while(t == t->parent->right){
          t = t->parent;
        }
        t = t->paren;
        return t;
      }
    }
  }
}

template<typename T>
BSTNode<T>* BST<T>::removeNode(BSTNode<T>* t, T k){
  BSTNode *c = findNode2(k)
  if(c == nullptr){
    return
  }
  if(c->right == nullptr && c->left == nullptr){
    if(c->parent->key < c->key){

    }
  }else if(c->rigth ){

  }

}

#endif
