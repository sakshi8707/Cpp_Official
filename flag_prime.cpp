#include<bits/stdc++.h>
using namespace std;

bool CheckPrime(int n)  
{
    bool flag = true;
    for(int i=1;i<n;i++)
    {
        if(n%i==0) 
        flag = false;
        break;
    }
    return false;
}
int main()
{
    if(CheckPrime(4))
    cout<<false<<endl;
    else
    cout<<true<<endl;
    return 0;
}