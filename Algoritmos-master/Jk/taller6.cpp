#include<iostream>
#include<string>
using namespace std;

int potencia(int n, int k){
  if(k == 0){
    return 0;
  }else{
    return n*potencia(n,k-1);
  }
}

string invertir(string s, int x){
  if(x == -1){
    return s[0] + "";
  }else{
    return s[x] + invertir(s,x-1);
  }
}

/*
int main(){
  int n = 5;
  for(int i = 0; i<10; i++){
    int k = i;
    cout << potencia(n,k) << endl;
  }
}
*/
/*
int main(){
  string s = "Uribe el perritoo";
  int x = s.size();
  string f = invertir(s,x);
  cout << f << endl;
}
*/
