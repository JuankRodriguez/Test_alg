#include "mylistqueue.hpp"
#include "myarrayqueue.hpp"

int main() {
  qarray::MyQueue<int> q;

  if(q.empty())
    cout << "Empty queue\n";

  q.push(3);

  if(q.empty())
    cout << "Empty queue\n";
/*
  for(int i = 1; i < 8; i++)
    q.push(i);
  cout << q.get_front() << " to " << q.get_back() << endl;

  while(!q.empty())
    cout << q.pop() << " ";
  cout << endl;

  if(q.empty())
    cout << "Empty queue\n";

  for(int i = 9; i < 25; i++) //9 to 25
    q.push(i);
  cout << q.get_front() << " to " << q.get_back() << endl;

  while(!q.empty())
    cout << q.pop() << " ";
  cout << endl;
*/

  // q.clear();

  // if(q.empty())
  //   cout << "Empty queue\n";


  return 0;
}
