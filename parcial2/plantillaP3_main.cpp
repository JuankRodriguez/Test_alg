#include <iostream>
#include "plantillaP3.hpp"
using namespace std;


int main() {
    SimpleVec myvec;

    // initialize the vector
    for(int i = 0; i < 8; i++)
        myvec.push(i);

    cout << "Going through the vector:\n";
    for(int i = 0; i < myvec.size(); i++)
        cout << myvec.retrieve(i) << " ";
    cout << endl;

    double tmp[] = {1.1, 2.2, 3.3, 4.4};
    myvec.insert_chunk(0, tmp, 4);

    cout << "Going through the vector:\n";
    for(int i = 0; i < myvec.size(); i++)
        cout << myvec.retrieve(i) << " ";
    cout << endl;

    return 0;
}
