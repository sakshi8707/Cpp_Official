#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
      string yr, mo, dt;
       yr = date.substr(0, 4);
        mo = date.substr(5, 2);
        dt = date.substr(8, 2);
//converting itt to int

         int year = stoi(yr);
        int month = stoi(mo);
        int day = stoi(dt);
//int to binary coversion fun
        auto toBinaryString = [](int num)
        {
          string binary = "";
          while(num>0)
          {
            if(num%2==0)
            {
              binary =  "0"+binary;
            }
            else
            {
              binary = "1" + binary;
            }
            num /= 2;
          }
          return binary == " " ? "0" : binary;
        };

        string binaryYr = toBinaryString(year);
        string binaryMonth = toBinaryString(month);
        string binaryDay = toBinaryString(day);

        return (binaryYr + "-" + binaryMonth + "-" + binaryDay);
 }
};

int main()
{
  string str;
  cin >> str;
  Solution obj;
  string ans = obj.convertDateToBinary(str);
  cout << ans << endl;
  return 0;
}