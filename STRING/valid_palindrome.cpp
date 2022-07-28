#include<bits/stdc++.h>
using namespace std;

bool IsPalindrome(string s)
{
    if(s.size()==1 && isalnum(s[0]))
            return true;
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            if(!isalnum(s[left]))
            {
                left++;
            }
            else if(!isalnum(s[right]))
            {
                right--;
            }
            else if(tolower(s[left])!=tolower(s[right]))
            {
                return false;
            }
            else {
                left++;
                right--;
            }
            
        }
        return true;
    // if(s.length()<=1)
    
    //     return true;
    
    // int st = 0,e=s.length()-1;
    // while(st<e)
    // {
    //   if(!isalnum(s[st]))
    // {
    //   st++;
    // }
    //   else if(!isalnum(s[e]))
    //   {
    //   e--;
    //   }
    // else {
    //  if(tolower(s[st])!=tolower(s[e]))
    //  {
    //   return false;
    //  }
    //   else 
    //  {
    //   st++;
    //   e--; 
    //  }
    //    }
    // }
    // return true;
}









    // string m = " ";
    // if(s.length()<=1)
    // return true;
    // for(int i=0;i<s.length();i++)
    // {
    //     if(s[i]<='a' && s[i]>='z')
    //     m += s[i];
    //     if(s[i]<='A' && s[i]>='Z')
    //     m += s[i]+32;
    // }
    // int n=m.length()-1;
    // for(int i=0;i<n;i++)
    // {
    //     if(m[i]==m[n-i])
    //     return true;
    // }
    // return false;



int main()
{
string s;
getline(cin,s);
if(IsPalindrome(s)==false)
cout<<"false"<<endl;
else
cout<<"true"<<endl;

  return 0;
}