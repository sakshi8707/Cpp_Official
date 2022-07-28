#include<bits/stdc++.h>
using namespace std;
// use of emplace function in stackEmplace
/*
int main()
{
  stack<int> s;
  s.push(5);
  s.push(4);
  s.push(3);
  s.push(2);
  s.push(1);
  s.emplace(6);
  while(!s.empty())
  {
      cout<<s.top()<<" ";
      s.pop();
  }
    return 0;
}
*/
int main()
{
    // using emplace function find the size of stack whitout using size() function
    stack<int> stack;
    int count = 0;
    stack.emplace(5);
    stack.emplace(13);
    stack.emplace(9);
    stack.emplace(4);
     
    while(!stack.empty())
{
    count++;
    stack.pop();
}
cout<<count<<endl;
}