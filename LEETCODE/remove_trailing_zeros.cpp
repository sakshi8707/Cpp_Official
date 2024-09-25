#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:

          // ** using stoi funciton**
    // string removeTrailingZeros(string num) {
    //   int n = num.size();
    //   int cnt = 0;
    //   while(num[cnt]=='0')
    //   {
    //     cnt++;
    //   }
    //   num.erase(0, cnt);
    //   return num;
    // }
          // ** using erase funciton**
    // string removeTrailingZeros(string num) {
    //   int n = num.size();
    //    reverse(num.begin(), num.end());
    //   int ans = stoi(num);
    //   string str = to_string(ans);
    //    reverse(str.begin(), str.end());
    //   return str;
    // }
// };
        //  *practising*         

class Solution {
public:

  string removeTrailingZeros(string num) {
     int n = num.size();
      int end=0;
      for(int i=n-1;i>=0;i--)
      {
          if(num[i]!='0')
          {
              end = i;
              break;
          }
      }
      string temp = num.substr(0,end+1);
      // int ans = stoi(temp);
      return temp;
}

};


int main()
{
    string num;
    cin >> num;
    Solution s;
    string ans = s.removeTrailingZeros(num);
    cout << ans << endl;

    return 0;
}