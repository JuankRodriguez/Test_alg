#include<stdexept>
#include<iostream>
using namespace std;

const int TABLE_SIZE = 1013;  // prime  number

template <typename VT>
struct KeyValueNode {
  string Key;
  VT value;
  KeyValueNode<VT> *next;
};

template <typename VT>
class HashMap{
private:
  // pointer  to  pointers  to  buckets
  KeyValueNode <VT> **table;

  int tableSize; // size of the  pointer  table
  int count;     //  number  of  elements  in  table

  // default  value  to  return  when  search  fails
  VT notfound;

  //  search  for  key "key" inside  the  bucket  at  index
  // "index" of the  table
  //  return  the  element  if found , or  nullptr  otherwise
  KeyValueNode <VT>*  search_bucket(int index , string  key);

  // hash  function
  unsigned int hash(string  key) {
    unsigned int hashVal = 0;
    for(char ch : key)
      hashVal += ch;
    return hashVal % tableSize;
  }

public:
  HashMap(VT def);
  ~HashMap ();

  int size();    //  return  no. of  elements
  bool empty(); // true if  there  are no  elements
  void clear(); //  delete  all  elements

  //  chained  hash  search: search  for  elem  with  key = key
  VT get(string key);
  //  return  true if key is in  table
  bool search(string key);
  //  chained  hash  insert: insert  at the  head of  bucket
  bool insert(string key , VT value);
  //  chained  hash  remove: remove  element  with  key = key
  void remove(string key);

  // print  no. of elems  in each  bucket  to a file  filename
  void distribution(const  string &filename);

  void display();
};

template <typename VT>
HashMap<VT>::HashMap(VT def){
  tableSize = TABLE_SIZE;
  count = 0;
  notfound = def;
  table = new KeyValueNode[TABLE_SIZE];
  for(int i = 0; i < TABLE_SIZE; i++)
    table[i] == nullptr;
}

// template <typename VT>
// HashMap<VT>::~HashMap(){
//
//   delete table;
// }

template <typename VT>
int HashMap<VT>::size(){
  return count;
}

template <typename VT>
bool HashMap<VT>::empty(){
  if(count == 0){
    return true
  }else{
    return false
  }
}

// template <typename VT>
// void HashMap<VT>::clear(){
//
// }

// template <typename VT>
// VT HashMap<VT>::get(string Key){
//
// }

// template <typename VT>
// bool HashMap<VT>::search(){
//
// }

template <typename VT>
bool HashMap<VT>::insert(string Key, VT value){
  KeyValueNode *primero = table[hash(Key)];
  KeyValueNode *n_caja = new KeyValueNode;
  n_caja->Key = Key;
  n_caja->value = value;

  if(primero == nullptr){
    n_caja->next = nullptr;
  }else{
    KeyValueNode *temporal = primero;
    n_caja->next = temporal;
  }
}
