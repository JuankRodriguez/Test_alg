#include<iostream>
#include<set>
using namespace std;

bool susbsetSumExists(set<int> mySet, int target){
  if(mySet.empty()){
    return target == 0;
  }else{
    set<int>::iterator first = mySet.begin();

    set<int> redSet(mySet.begin(), mySet.end());
  }
}
