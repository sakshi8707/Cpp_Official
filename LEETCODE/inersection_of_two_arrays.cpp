#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    vector<int> ans;
    unordered_set<int> s;
    for (int i = 0; i < nums1.size(); i++)
    {
      for (int j = 0; j < nums2.size(); j++)
      {
        if (nums1[i] == nums2[j])
        {
          s.insert(nums1[i]);
        }
      }
    }
    for (int i = 0; i < s.size(); i++)
    {
      ans.push_back(s[i]);
    }
    return ans;
  }
};

int main()
{

  return 0;
}