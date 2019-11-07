#include <vector>
#include <iostream>
using namespace std;


int gcd(int num, int den) {
    long gcd, tmp, rest;
    gcd = abs(num);
    tmp = den;
    while (tmp > 0) {
        rest = gcd % tmp;
        gcd = tmp;
        tmp = rest;
    }
    return gcd;
}


class Racional {
public:
    Racional() {};
    Racional(int a, int b) {
        int my_gcd = gcd(a, b);
        num = a / my_gcd;
        den = b / my_gcd;
    }

    int get_num() const { return num; }
    int get_den() const { return den; }
    void set_num(int x = 0) { num = x; }
    void set_den(int x) { den = x; }
    
private:
    int num, den;
};


ostream & operator<<(ostream &os, const Racional &rhs) {
    os << rhs.get_num() << "/" << rhs.get_den();
    return os;
}


bool operator<(const Racional &op1, const Racional &op2) {
    // your solution here...
}


void rational_sort(vector<Racional> &vr) {
    // your solution here...
}


int main()
{
    const int sz = 10;
    vector<Racional> input;
    
    cout << "Index\t";
    for (int i = 1; i < sz; i++) {
        Racional tmp(sz - i, 1);             // test 1: completely unsorted
//        Racional tmp(i, sz - i);             // test 2: already sorted
//        Racional tmp(sz / 2 - i, sz - i);    // test 3: unsorted
        input.push_back(tmp);
        cout << i - 1 << "\t";
    }
    cout << endl;
    
    cout << "Before\t";
    for (unsigned int i = 0; i < input.size(); i++)
        cout << input[i] << "\t";
    cout << endl;
    
    rational_sort(input);
    
    cout << "After\t";
    for (unsigned int i = 0; i < input.size(); i++)
        cout << input[i] << "\t";
    cout << endl;

    return 0;
}
