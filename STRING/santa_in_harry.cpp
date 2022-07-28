#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag = 0;
int t;
cin>>t;
while(t--)
{
    int N;   
    cin>>N;
    int arr[N];
    for(int i = 0; i < N;i++)
    {
    int curr =0;
    cin>>arr[i];
    int n = arr[i];
    while(n>0)
    {
     curr = n%2;
     n= n/2;
     if(curr==n%2)
     {
         flag = 1;
     }
    }
    if(flag==0)
    {
        cout<<"sack A"<<endl;
    }
    else
    {
        cout<<"sack B"<<endl;
    }
 }
 cout<<endl;

} 

  return 0;
}