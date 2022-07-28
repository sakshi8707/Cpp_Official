#include<bits/stdc++.h>
using namespace std;

int mani()
{
stack<int> s1;
stack<int> s2;
s1.push(1);
s1.push(2);
s1.push(3);
s1.push(4);
// for stack 2 taking input
s2.push(3);
s2.push(5);
s2.push(7);
s2.push(9);
// for swaping we use inbuilt function
s1.swap(s2);
// for printing output
cout<<"for s1->";
while(!s1.empty())
{
    cout<<s1.top()<<" "  ;
    s1.pop();
}
cout<<"for s2->";
while(!s2.empty())
{
    cout<< s1.top()<< " " ;
    s2.pop();
}
    return 0;
}