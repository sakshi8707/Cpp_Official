#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isComplete(string str , int st , int end,int k)
    {
        map<char,int> mp;
       //first finding the cnt of each character in map , then checking is cnt equal to k
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        
        //after finding cnt now checking condition
         for(auto it : mp)
         {
             if(it.second==k )
             {
                 if((it.first-it.first+1)<=2)
                 {
                     return true;
                 }
             }
         }
        return false;
        
    }
    
public:
    int countCompleteSubstrings(string word, int k) {
        int n = word.size();
        int cntString=0;
        for(int i=0;i<n;i++)
        {
            
            for(int j=i;j<n;j++)
            {
                string str="";
                for(int l=i;l<=j;l++)
                {
                    str+=word[k];
                     if(isComplete(str,i,j,k))
                     {
                         cntString++;
                     }
                }
            }
        }
        return cntString;
    }
};


int main(){
    


return 0;
}