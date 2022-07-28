#include<bits/stdc++.h>
using namespace std;
//sliding window approch-------------------------------------------->
int longest_substr_without_repeating_char(string s)
{
    int l=0,r=0,n = s.length();
    int maximum = 0;
    vector<int> v(128);
    int count = 0;
    while(r<n)
    {
        char x = s[r];
        v[x]++;
        while(v[x]>1)
        {
          char y = s[l];
          v[y]--;
          l++;
        }
        maximum = max(maximum,r-l+1);
        r++;
    } 
    return maximum;
}

int main()
{
string s;
cin>>s;
int c = longest_substr_without_repeating_char(s);
cout<<c<<endl;
  return 0;
}
// brute force approch------------------------------------------------------>
// #include<bits/stdc++.h>
// using namespace std;

// bool checkRepetetion(string s , int i,int j)
// {
// int cnt = 0;
// vector<char> us(128);
// for(int k=i;k<j;k++)
//  {
//      char c = s[k];
//     us[c]++;
//  if(us[c]>1)
//  {
//      return false;
//  }
//  }
//      return true;
// }

// int Longest_substr(string s)
// {
// int maximum = 0;
// int n = s.length();
// for(int i = 0;i<n-1;i++)
// {
//     for(int j = i+1;j < n;j++)
//     {
//        if(checkRepetetion(s,i,j))
//        {
//           maximum = max(maximum,j-i);
//        }
//     }
// }
// return maximum;
// }

// int main()
// {
// string s;
// cin>>s;

// cout<<Longest_substr(s);

//   return 0;
// }