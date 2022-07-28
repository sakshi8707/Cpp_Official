#include<bits/stdc++.h>
using namespace std;

int Longest_String_Without_Repet_Char(string str)
{
 map<char,int> m;
 int length =0;
 int current =0;
 int l=0,r=0;
 int n = str.size();
 while(r<n)
 {
     if(m[str[r]]!= -1)
     {
       l = max(m[str[r]]+1,l);
     }
        m[str[r]] = r;
        length = max(length, r-l+1);     
        r++;
      
 }
 return length;
}

int main()
{
string str;
cin>>str;
cout<<Longest_String_Without_Repet_Char(str)<<endl;

  return 0;
}