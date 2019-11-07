#include<stdexept>
#include<iostream>
using namespace std;

const int INITIAL_CAPACITY = 10;

template<typename KT, typename VT>
class MyMap{
private:
  struct KeyValuePair{
    KT key;
    VT value;
  };

  KeyValuePair *array;
  int capacity;
  int count;

  void expandCapacity();
  int findkey(KT key);

public:
  MyMap();
  ~MyMap();

  int size();
  bool empty();
  void clear();
  void insert(KT key, VT calue);
  VT get(KT key);
  bool containsKey(KT key);
  void remove(KY key);
};

template<typename KT, typename VT>
MyMap<KT,VT>::MyMap(){
  capacity = INITIAL_CAPACITY;
  count = 0;
  array = new KeyValuePair[capacity];
}

template<typename KT, typename VT>
MyMap<KT,VT>::~MyMap(){
  delete[] array;
}

template<typename KT, typename VT>
int MyMap<KT,VT>::size(){
  return count;
}

template<typename KT, typename VT>
bool MyMap<KT,VT>::empty(){
  return count == 0;
}

template<typename KT, typename VT>
void MyMap<KT,VT>::clear(){
  count = 0;
}

template<typename KT, typename VT>
void MyMap<KT,VT>::insert(KT key, VT value){
  int index = findkey(Key);
  if(index == -1){
    if(count == capacity) expandCapacity();
    index = count++;
    array[index].key = key;
  }
  array[index].value = value;
}

template<typename KT, typename VT>
VT MyMap<KT,VT>::get(KT key){
  int index = findkey(key);
  if(index == -1)
    throw runtime_error("get: No tienes ese elemento\n");

  return array[index].value;
}

template<typename KT, typename VT>
bool MyMap<KT,VT>::containsKey(KT key){
  int elem = findkey(Key);
  if(elem == -1){
    return false;
  }
  return true;
}

template<typename KT, typename VT>
void MyMap<KT,VT>::remove(KT Key){
  int index = findkey(key);
  if(index == -1)
    throw runtime_error("remove: Attempting to removevalue of non-existent key\n");

  for(int i = index; i < count-1; i++){
    array[i].key = array[i+1].key;
    array[i].value = array[i+1].value;
  }
  count --;
}

template<typename KT, typename VT>
int MyMap<KT,VT>::findkey(KT key){
  //linear search algorithm
  for(int i = 0; i < count; i++){
    if(array[i].key == key)
      return i;
  }
  return -1
}

template<typename KT, typename VT>
void MyMap<KT,VT>::expandCapacity(){
  
}
