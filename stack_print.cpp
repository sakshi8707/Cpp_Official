#include<iostream>
#include<stack>
using namespace std;

int main()
{
stack<int> s;
s.push(34);
s.push(89);
s.push(00);
s.push(45);
s.pop();
s.pop();
while(!s.empty())
{
    cout<<" "<<s.top();
    s.pop();
}
    return 0;
}