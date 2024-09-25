#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.size();
        string temp = "";

        for (int i = 0; i < n; i++) {
            int idx = (i + k) % n; // Properly handle the wrapping around
            temp += s[idx]; 
        }

        return temp;
    }
};


int main()
{

  string s;
  cin >> s;
  int k;
  cin >> k;
  Solution obj;
  string ans = obj.getEncryptedString(s, k);

  cout << ans << endl;
  return 0;
}