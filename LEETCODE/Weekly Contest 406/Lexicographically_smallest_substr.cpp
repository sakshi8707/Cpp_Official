#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getSmallestString(string s) {
        
        int n = s.length();
        string ans = "";
        
        for(int i=0;i<n;i++)
        {
          int digit = int(s[i]);
          for (int j = i + 1; j < n;j++)
          {
            if(digit<int(s[j]) && (digit%2==int(s[j])%2))
            {
              //if we find greater , than swap
              swap(s[i], s[j]);
              break;
            }
          }
        }
        return s;
    }
};


// **better approch**

class Solution {
public:
    string getSmallestString(string s) {
        int n = s.length();
        for (int i = 0; i < n - 1; i++) {
            // Checking the adjacent digits for the same parity
            if (s[i] % 2 == s[i + 1] % 2 && s[i] > s[i + 1]) {
                
                swap(s[i], s[i + 1]);
                
                break;
            }
        }
        return s;
    }
};

int main()
{
  string s;
  cin >> s;
  Solution obj;
  string ans = obj.getSmallestString(s);
  cout << ans << endl;
  return 0;
}