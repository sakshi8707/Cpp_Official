#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(int n,string s)
 {
       for(int i = 0; i < n/2; i++)
       {
         if(s[i]!=s[n-i-1])
         {
           return false;
           break;
         }
       }
       return true;
 }

int main()
{
  int t;cin>>t;
  while(t--)
  {
      int n,k;cin>>n>>k;
      string s;
      cin>>s;
      int count = 0;
      // cout<<"string "<<s<<endl;
      for(int i=0;i<n/2;i++)
      {
          if(s[i] != s[n-i-1]) 
          {
            // count+=1;
            if(count<k)
           {
            if(s[i]=='0')
            {
              s[n-i-1] = '0';
              count++;
            }
            else
            {
              s[n-i-1] = '1';
              count++;
            }
            }
          }
      }
     if(isPalindrome(n,s))
     {
       cout<<"YES"<<endl;
     }
     else
     {
       cout<<"NO"<<endl;
     }
     
      }
  return 0;
}
// 2
// 3 0
// 110
// 6 1
// 101100
// input------------->
// 4
// 3 0
// 110
// 6 2
// 110101
// 8 3
// 10110110
// 6 2
// 010101
//output--------->
/*4
3 0     
110     
NO      
6 2     
110101  
NO      
8 3     
10110110
NO      
6 2     
010101
NO*/
