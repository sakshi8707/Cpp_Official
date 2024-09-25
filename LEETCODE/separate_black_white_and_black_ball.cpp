#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// **better approch**
// **TC : o(n) for worst case**

class Solution {
public:
    long long minimumSteps(string s) {
        
        int ans = 0;
        int n = s.length();
        int left = 0;
        int right = n-1;
        
        while(left<right)
        {
            if(s[left]=='0')
            {
                left++;
            }
            if(s[right]=='1')
            {
                right--;
            }
            if(s[left]=='1' && s[right]=='0')
            {
                swap(s[left],s[right]);
            }
            while(s[right]!=0)
            {
                right--;
            }
        }
    }
};


int main()
{

  return 0;
}