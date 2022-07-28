#include<bits/stdc++.h>
using namespace std;
string CheckString(string temp)
{   int maxsize = -1;
    int m = temp.length();
    for(int k=0;k<m;k++)
    {
        for(int l=1;l<=k;l++)
       {
       if(temp[k]!=temp[l])
        //break;
        continue;
      else
      break;
    //    else
    //    continue;
       }
    maxsize = max(maxsize ,m );
    }
    cout<<maxsize<<" ";
}
// fun for checking whether
void Longest_String_Without_Repet_Char(string str)
{
    int n = str.size();         
    string temp;
  for(int i=0;i<n;i++)
   {
    for(int j=0;j<=i;j++)
    {
        temp = str[j];
    //    cout<<str[j];
    //cout<<temp;
    //int k=0,l=1;
    CheckString(temp);
    
    }

   }

}

int main()
{
string str;
cin>>str;
Longest_String_Without_Repet_Char(str);

  return 0;
}