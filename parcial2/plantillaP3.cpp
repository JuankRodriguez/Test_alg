#include "plantillaP3.hpp"
using namespace std;


void SimpleVec::expandCapacityWith(int param) {
  double *oldArray = array;
  capacity = 2 * param;
  array = new double[capacity];

  for(int i = 0; i < length; ++i)
      array[i] = oldArray[i];
  delete[] oldArray;
}


void SimpleVec::insert_chunk(int index, double *vals, int vals_size) {
  if(capacity < length+vals_size) expandCapacityWith(vals_size);

  double *oldArray = array;
  double *arrayCopy = new double[capacity];
  for(int i = length; i > index; --i)
    arrayCopy[i] = oldArray[i];

  for(int k = index; k < length; k++)
    array[k] = vals[k];
  array[index] = *vals;

  for(int j = index+vals_size; j < length; j++)
    array[j] = arrayCopy[j];
  array[index] = *arrayCopy;

  delete[] oldArray;
  delete[] arrayCopy;

}


SimpleVec::SimpleVec() : capacity(INITIAL_CAPACITY), length(0) {
    array = new double[capacity];
}


SimpleVec & SimpleVec::operator=(const SimpleVec& rhs) {
    delete[] array;
    capacity = rhs.capacity;
    length = rhs.length;
    array = new double[capacity];
    for(int i = 0; i < length; ++i)
        array[i] = rhs.array[i];
    return *this;
}


void SimpleVec::push(double value) {
    if(length == capacity) expandCapacity();
    array[length++] = value;
}


void SimpleVec::erase(int index) {
    for(int i = index; i < length-1; ++i)
        array[i] = array[i+1];
    length--;
}


void SimpleVec::insert(int index, double value) {
    if(length == capacity) expandCapacity();

    for(int i = length; i > index; --i)
        array[i] = array[i-1];
    array[index] = value;
    length++;
}


void SimpleVec::modify(int index, double value) {
    array[index] = value;
}


double SimpleVec::retrieve(int index) {
    return array[index];
}


void SimpleVec::expandCapacity() {
    double *oldArray = array;
    capacity *= 2;
    array = new double[capacity];

    for(int i = 0; i < length; ++i)
        array[i] = oldArray[i];
    delete[] oldArray;
}
