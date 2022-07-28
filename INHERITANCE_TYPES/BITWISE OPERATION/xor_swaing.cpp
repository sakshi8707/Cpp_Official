#include<bits/stdc++.h>
using namespace std; // for
// using xoR operation we dove swaping 
int main()
{
    int a=3,b=4;
   a = a ^ b; 
   b = b ^ a; // b ^ ( a ^ b) = b ^ b^a= a;
   a = b ^ a; // (b ^ a) ^ a = b
cout<<"after swaping : "<<a<<","<<" "<<b<<endl;
    return 0;
}