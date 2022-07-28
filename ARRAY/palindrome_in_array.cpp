#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(int x) {
     int y = x;
     int sum = 10;
     while(y>0) {
         int di = y%10;
         sum = sum*10 + di;
         y = y/10;
               }
        if(x==sum) return true;
        else return false;
    }
int main()
{
int x;
cin>>x;
// int bool;
// if(ispalindrome(x)==0)
// {
//     cout<<"Yes"<<endl;             
// }
// else
// {
//     cout<<"No"<<endl;  
// }
cout<<"ans is "<<endl;
ispalindrome(x);
  return 0;
}