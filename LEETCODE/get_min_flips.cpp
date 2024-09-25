#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  int getMinFlips(string password)
  {
    int flipcnt = 0;
    for (int i = 0; i < password.size();i++)
    {
      char firstChar = password[i];
      char secondChar = password[i + 1];

      if(firstChar != secondChar)
      {
        flipcnt++;
      }
    }
    return flipcnt;
  }
};


int main(){

  string str;
  cin >> str;
  Solution obj;
  int ans = obj.getMinFlips(str);
  cout << ans << endl;
  return 0;
}