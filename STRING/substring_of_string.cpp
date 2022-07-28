#include<bits/stdc++.h>
using namespace std;
// function for SubString
void SubString(string str,int n)
{
   // int n = str.length();
     for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
           cout<<str.substr(i,j)<<" ";
           
        }cout<<endl;
       
    }
}
int main()
{
int n;

cin>>n;
string str;
cin>>str;
SubString(str,n);

  return 0;
}