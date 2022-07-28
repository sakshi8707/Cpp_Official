#include<bits/stdc++.h>
using namespace std;
//Longest Substring Without Repeating Characters
int Longest_String_Without_Repet_Char(string str)
{
    vector<int> v(256,-1);
    int l=0,r=0;
    int length =0;
    int s = str.size();
    while(r<s)
   {
     if(v[str[r]]!=-1)
     {
         l = max(v[str[r]]+1,l);
     }
     v[str[r]] = r;
     length = max(length,r-l+1);
     r++;

   }
   return length;
   /*class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> v(256,-1);
        int length = 0;
        int r=0,l=0;
        int ss= s.length();
        while(r<ss)
        {
            if(v[s[r]]!=-1)
            {
                l = max(v[s[l]]+1,l);
            }
            v[s[r]]=r;
            length = max(length,r-l+1);
            r++;
        }
        return length;
    }
};*/
}


int main()
{
string str;
cin>>str;
cout<<Longest_String_Without_Repet_Char(str)<<endl;

  return 0;
}