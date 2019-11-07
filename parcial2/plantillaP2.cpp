#include <iostream>
using namespace std;


int digit_sum(int digit) {
  int respuesta = 0;
  if(digit == 0){
    return 0;
  }else{
    respuesta = digit%10;
    return respuesta + digit_sum(digit/10);
  }
}


int main()
{
    int test1 = 1;
    cout << "digit_sum(" << test1 << ") = " << digit_sum(test1) << endl;

    int test2 = 17;
    cout << "digit_sum(" << test2 << ") = " << digit_sum(test2) << endl;

    int test3 = 172;
    cout << "digit_sum(" << test3 << ") = " << digit_sum(test3) << endl;

    int test4 = 1729;
    cout << "digit_sum(" << test4 << ") = " << digit_sum(test4) << endl;

    int test5 = 17291;
    cout << "digit_sum(" << test5 << ") = " << digit_sum(test5) << endl;

    return 0;
}
