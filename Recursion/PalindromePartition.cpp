#include<bits/stdc++.h>
using namespace std;

// Tc: O(2^n) * O(n/2){check palindrom} * O(k)(inserting palindromem into ds)
// SC: O(k*x) ~ o(n) auxilary space

class Solution {
public:
   

    bool isPalindrome(string s , int st , int end)
    {
        //checking if string is palindrome or not
         while(st<=end)
         {
            if(s[st++]!=s[end--])
            {
                return false;
            }
            return true;
         }
    }

    void findPartition(int idx , string s , vector<vector<string>>& ans , vector<string>& temp )
    {
        //base case
        if(idx==s.length())
        {
            ans.push_back(temp);
            return;
        }

        //main logic below
          for(int i=idx;i<s.length();i++){
              if(isPalindrome(s,idx,i))
              {
                temp.push_back(s.substr(idx , i-idx+1));
                findPartition(i+1,s,ans,temp);
                temp.pop_back();
              }
          }
    }


    vector<vector<string>> partition(string s) {
        int n = s.length();
        vector<vector<string>> ans;
        vector<string> temp;

        findPartition(0,s,ans , temp);

        return ans;

    }
};

int main(){
    
    return 0;
}