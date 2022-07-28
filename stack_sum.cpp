#include<bits/stdc++.h>
using namespace std;

int main()
{
    // sum of no using stack
    stack<int> s;
    s.push(4);    
    s.push(10);    

    int sum = 0;
    while(!s.empty())
    {
        sum =sum+s.top();
        s.pop();
    }
 cout<<sum<<" "<<endl;
    return 0;
}