#include <iostream>
using namespace std;

/*
int digit_sum(int digit) {

}
*/

int main()
{
  int length = 5;
  int capacity = 10;
  int vals_size = 8;
  if(capacity < length+vals_size){
    cout << "Sobrepaso la capacidad" << endl;
  }else{
    cout << "Aun puedo alamacenar mas" << endl;
  }

  return 0;
/*
    int j = 529;
    int k;
    for(int i =0; i < 4; i++){
      k = j%10;
      j = j/10;
      cout << k << endl;
    }
    return 0;
*/
}
