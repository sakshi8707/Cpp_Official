#include<bits/stdc++.h>
using namespace std;
bool findPalindrome(string &s,int num)
{
    int n = num/2;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[n-1-i])
        {
            return false;
        }
    } 
    return true;
}

int main()
{
  int t;cin>>t;
  while(t--)
  {
	int num;
    cin>>num;
    string s = " ";
    char ch = 'a';
    for(int i=0; i<num;i++)   
    {
      s = s+ch;
      ch++;
      if(ch=='d')
      {
        ch = 'a';
      }
    }
    cout<<s<<endl;
   
  }

  return 0;
}