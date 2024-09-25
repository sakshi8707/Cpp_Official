#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//**better approch**

class Solution {
public:
bool cmp(vector<int> &a, vector<int> &b){
    return a[0] < b[0];
}

    int countDays(int days, vector<vector<int>>& meetings) {
      int n = meetings.size();
      sort(meetings.begin(), meetings.end(),cmp);
      int noOfDays = 0;
    
      noOfDays += abs(meetings[0][0] - 1);
      for (int i = 1; i < n;i++)
      {

        if(meetings[i][0]<=meetings[i-1][1])
        {
          if(meetings[i][1]<meetings[i-1][1])
          {
            meetings[i][1] = meetings[i - 1][1];
          }
        }
        else
        {
        int diff =  meetings[i][0]-meetings[i - 1][1];
        noOfDays += (diff - 1);
        }
      }
      noOfDays += abs(meetings[n - 1][1] - days);
      return noOfDays;
    }
};

// **brute approch**k
// class Solution {
// public:
//     int countDays(int days, vector<vector<int>>& meetings) {
//       int n = meetings.size();
//       vector<bool> availableDays( days+1,false);

//       for(auto it : meetings)
//       {
//         int st = it[0];
//         int end = it[1];

//         for (int i = st; i <= end;i++)
//         {
//           availableDays[i] = true;
//         }
//       }
//       //now counting the available days
//       int cnt = 0;
//       for(auto it : availableDays)
//       {
//         if(it==false)
//         {
//           cnt++;
//         }
//       }
//       return cnt-1;
//     }
// };

int main() {
    int days;
    cin >> days;
    int n;
    cin >> n;
    vector<vector<int>> meetings(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        cin >> meetings[i][0] >> meetings[i][1];
    }

    Solution obj;
    int ans = obj.countDays(days, meetings);
    cout << ans << endl;
    return 0;
}