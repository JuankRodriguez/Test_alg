#ifndef __SIMPLE_VECTOR_HPP
#define __SIMPLE_VECTOR_HPP


#include <iostream>


const int INITIAL_CAPACITY = 10;


class SimpleVec {
private:
    double *array;
    int capacity, length;

    void expandCapacity();
    void expandCapacityWith(int param);

public:
    SimpleVec();
    ~SimpleVec() { delete[] array; }
    SimpleVec & operator=(const SimpleVec& rhs);

    void push(double value);
    void erase(int index);
    void insert(int index, double value);
    void modify(int index, double value);
    double retrieve(int index);
    void insert_chunk(int index, double *vals, int vals_size);

    void clear() { length = 0; }
    bool empty() { return length == 0; }
    int size() { return length; }

};

#endif
