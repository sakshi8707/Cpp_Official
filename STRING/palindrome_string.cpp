#include<bits/stdc++.h>
using namespace std;
  bool isPalindrome(string s) {
     // if(s==s.empty())   
     //  return true;
        string m = " ";
        for(int i=0;i<s.size();i++)
        {
            // if(s[i]==65)
            // m+= s[i]+32;
            if(s[i]<=90 && s[i]>= 65)
            
                m+= s[i]+32;
            
            if((s[i]<=122 && s[i]>= 97) || (s[i] <=57 && s[i]>=47))
            
                m+= s[i];
            
        }
//          for(int e=0,f=m.length()-1;e<f;e++,f--) 
//         {
//             if(m[e]!=m[f])
//                 return false;
//         }
//         return true;
//      }
         int n = m.length();
        // for loop for checking
        for(int i=0;i<n/2;i++)
        {
            if(m[i]!=m[n-i-1])
        return false;
        }
        return true;
     }
        
//  
int main()
{
    string s;
    getline(cin,s);
//isPalindrome(s);
if(isPalindrome(s))
cout<<"true"<<endl;
else
cout<<"false"<<endl;

  return 0;
}