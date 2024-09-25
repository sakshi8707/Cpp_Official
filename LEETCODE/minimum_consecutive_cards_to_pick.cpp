#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int, pair<int, int>> mp;
        int n = cards.size();
        int maxi = -1;

        for (int i = 0; i < n; i++) {
            mp.insert({cards[i], {cards[i] + 1, i}});
        }

        // After filling map, the main approach

        for (int i = 0; i < n; i++) {
            if (mp[cards[i]].first > 1) {
                int k = mp[cards[i]].second;
                maxi = max(maxi, (i-k) + 1);
            }
        }
        return maxi;
    }
};


//updated code

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int, pair<int, int>> mp;
        int n = cards.size();
        int maxi = -1;

        for (int i = 0; i < n; i++) {
            auto it = mp.find(cards[i]);
            if (it != mp.end()) {
                // Update the existing key-value pair
                it->second = {it->second.first + 1, i};
            } else {
                // Insert a new key-value pair
                mp.insert({cards[i], {1, i}});
            }
        }

        // After filling map, the main approach

        for (int i = 0; i < n; i++) {
            if (mp[cards[i]].first > 1) {
                int k = mp[cards[i]].second;
                maxi = max(maxi, (i - k) + 1);
            }
        }
        return (maxi >= 2) ? maxi : -1;
    }
};

int main()
{
  int n;
  cin >> n;
  vector<int> cards;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    cards.push_back(a);
  }
  Solution obj;
  int ans = obj.minimumCardPickup(cards);
  cout << ans << endl;
  return 0;
}