#include<bits/stdc++.h>
using namespace std;

 int romanToInt(string s)
{
  map<char, int> map  = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
  int i =0,sum = 0;
  int n = s.length();
     while(i<n)
     {
          if(map[s[i]]>=map[s[i+1]])
          {
            sum += map[s[i]];
            i++;
          }
          else
          {
            int a = map[s[i+1]]-map[s[i]];
            sum += a;
            i=i+2;
          }
     }
     return sum;
}

int main()
{
string s;
cin>>s;
  int ans = romanToInt(s);
  cout<<ans<<endl;

  return 0;
}