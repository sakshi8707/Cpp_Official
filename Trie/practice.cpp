#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    Node *links[2];

    bool containsKey(int bit)
    {
      return (links[bit] != NULL);
    }

    void put(int bit , Node* node)
    {
      links[bit] = node;
    }

    Node* get(int bit)
    {
      return links[bit];
    }
};

class Trie{
  private:
    Node *root;
  public:
    Trie()
    {
      root = new Node();
    }

    void insert(int num)
    {
      Node *node = root;
      for (int i = 31; i >= 0;i--)
      {
        int bit = (num >> i) & 1;
        if(!node->containsKey(bit))
        {
          node->put(bit, new Node());
        }
        node = node->get(bit);
      }
    }

    int findMax(int num)
    {
      Node *node = root;
      int maxNum = 0;
      for (int i = 31; i >= 0;i--)
      {
        int bit = (num >> i) & 1;
        if(node->containsKey(!bit))
        {
          maxNum = maxNum | (1 << i);
          node = node->get(!bit);
        }
        else
        {
          node = node->get(bit);
        }
      }
      return maxNum;
    }
};

class Solution {
public:
	vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
		// Your code goes here

    int m = queries.size();
    // int n = queries[0].size();
    int n = nums.size();
    vector<int> ans(m,0);
    vector<pair<int, pair<int, int>>> offlineQueries;
    // ai-xi-idx in format  sotring in offline query
    //**TC : mlogm
    sort(nums.begin(), nums.end());

    //filling offlineQueue from queries
    for (int i = 0; i < m;i++)
    {
      offlineQueries.push_back({queries[i][1], {queries[i][0], i}});
    }
    sort(offlineQueries.begin(), offlineQueries.end());
    int j = 0;
    Trie trie;

    //**TC: O(Q+m)**
    for (int i = 0; i < m;i++)
    {
      int ai = offlineQueries[i].first;
      int xi = offlineQueries[i].second.first;
      int idx = offlineQueries[i].second.second;

      while(j<n && nums[j]<=ai)
      {
        trie.insert(nums[j]);
        j++;
      }
      if(j==0)
      {
        ans[idx] = -1;
      }
      else
      {
        ans[idx] = trie.findMax(xi);
      }
      
    }
    return ans;
  }
};

int main(){
    


return 0;
}