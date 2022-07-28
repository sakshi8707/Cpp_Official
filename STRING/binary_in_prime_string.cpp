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
bool flag = 0;
int n = str.length();
if(str.length()==1)
{
cout<<"NO"<<endl;
}
for(int i = 0; i < str.length()-1; i++)
{
   if(str[i]=='1')
{
    flag = 0;
    cout<<"YES"<<endl;
    break;
}
}
if(flag!=0)
cout<<"NO"<<endl;   
}

  return 0;
}