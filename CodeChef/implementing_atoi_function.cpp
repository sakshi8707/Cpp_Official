#include<bits/stdc++.h>
using namespace std;

//  int myAtoi(char* s) {
       //int n = s.length();
//        int ans = 0;
//         for(int i=0;s[i]!='\0';i++)
//         {
//          ans = ans*10+s[i]-'0';
//         }
//         return ans;
//     }

// using string stream  (most imp for int to string or string to int )
int  string_stream(string s)
{
  stringstream obj(s);
  int ans = 0;
  obj>>ans;
  return ans;
}


int main()
{
char* s;       
cin>>s;
//cout<<myAtoi(s)<<endl;
// int res = myAtoi(s);
//cout<<res<<endl;
string_stream(s);
  return 0;
}