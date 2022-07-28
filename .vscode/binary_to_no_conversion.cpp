#include<bits/stdc++.h>
using namespace std;

bool binary_to_number(string arr)
{
  bool flag = true;
     int n = arr.length();
    int sum = 0;
    for(int i=0; i<n; i++)
    {
         sum = sum+(arr[i] * pow(2,i)); 
    }
    //cout<<sum<<" "<<endl;
    for(int i=2;i<sum;i++)
    {
    if(sum%i==0)
     {
        //print substring
       flag = false;
       break;
     }
    }    
}
// substring function                 
void substring(string arr,int n)
{
for(int i=0; i<n;i++)
{
    for(int j = i;j<n-1;j++)
    {
        string s = arr.substr(i,j);
       
       if(binary_to_number(s)==false)
       {
           cout<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
}
return;
}

int main()
{
//int n;
//cin>>n;  
string arr;
cin>>arr;
// for(int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }
//binary_to_number(arr);
int n = arr.length();
substring(arr,n);
  return 0;
}