#include<bits/stdc++.h>
using namespace std;
// fuction
int factorial(int n)
{
if(n==0)
{
    return 1;
}
int prevfact=n*factorial(n-1);
return prevfact;
}

int main()
{
    int n;
    cin>>n;
cout<<factorial(n);
    return 0;
} 