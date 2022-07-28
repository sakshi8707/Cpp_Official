#include <iostream>
using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    int n = nums.size();
    int countArr[n];
    //  for(int i=0;i<nums.size();i++)
    //  {
    //     countArr[nums[i]]++;
    //  }
    for (int i = 0; i < n; i++) {
      countArr[nums[i]]++;
      if (countArr[nums[i]] >= 2) {
        return true;
      }
    }
    return false;
  }
};

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v.push_back(a);
  }
  Solution obj;
  int ans = obj.containsDuplicate(v);
  if (ans == true) {
    cout << "false" << endl;
  } else {
    cout << "true" << endl;
  }
  return 0;
}