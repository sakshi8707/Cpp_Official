#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string str;
    cin>>str;
    // for(int i = 0; i <str.size();i++)
    // {
    //     cin>>str[i];
    // }
     int n = str.size();
    // main operation
for(int i=0;i<n;i++)
 {
     if(str[i]=='0' && str[i+1]=='1')
     {
         if(str[i]=='1' && str[i+1]=='0')
         {
             cout<<"yes"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
     }
 }
}

  return 0;
}