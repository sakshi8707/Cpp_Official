#include<bits/stdc++.h>
using namespace std;
//recursion function
int  sum(int n)
 {
     if(n==0)
     {
         return 0;
     }
    //int ans=0;
//     ans+=sum(n-1);
//    cout<<ans<<endl;
int prevSum = sum(n-1);
return n+prevSum;
}

int main()
{
    int n;
    cin>>n;
cout<<sum(n)<<endl;
    return 0;
}