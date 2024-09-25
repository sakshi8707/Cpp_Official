#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int cntVowel(int st,int end,string &s)
    {
        
    }

    int cntConsonant(int st,int end,string &s)
    {

    }

    int beautifulSubstrings(string s, int k) {
      int n = s.length();
      int vowel=0, consonant = 0;
      int beautifulSubStr=0;
      for (int i = 0; i < n;i++)
      {
        for (int j = i; j < n;j++)
        {
          vowel = cntVowel(i, j, s);
          consonant = cntConsonant(i, j, s);
          if(vowel==consonant)
          {
            if((vowel*consonant)%k==0)
            {
              beautifulSubStr++;
            }
          }
        }
      }
      return beautifulSubStr;
    }
};


int main(){
    


return 0;
}