#include<bits/stdc++.h>
using namespace std;


class Node{
  public:
    Node *links[2];
    
    bool containsKey(int bit)
    {
      return (links[bit] != NULL);
    }

    Node* get(int bit)
    {
      return (links[bit]);
    }

    void put(int bit , Node* node)
    {
      links[bit] = node;
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

  public:
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

  public:
  int getMax(int num)
  {
    int maxNum = 0;
    Node *node = root;
    for (int i = 31; i >= 0;i--)
    {
      int bit = (num >> i) & 1;
      if(node->containsKey(1-bit))
      {
        maxNum = maxNum | (1 << i);
        node = node->get(1 - bit);
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
    int findMaximumXOR(vector<int>& nums1,vector<int>& nums2) {
     //using object
     Trie trie;
     int maxi = 0;
     int n1 = nums1.size();
     int n2 = nums2.size();
     for (int i = 0; i < n1;i++)
     {
       trie.insert(nums1[i]);
     }
     for (int i = 0; i < n2;i++)
     {
       maxi = max(maxi, trie.getMax(nums2[i]));
     }
     return maxi;
    }
};


int main(){

  int n1;
  cin >> n1;
  vector<int> arr1;
  for (int i = 0; i < n1;i++)
  {
    int a;
    cin >> a;
    arr1.push_back(a);
  }
  int n2;
  cin >> n2;
  vector<int> arr2;
  for (int i = 0; i < n2;i++)
  {
    int a;
    cin >> a;
    arr2.push_back(a);
  }
  Solution obj;
  int ans = obj.findMaximumXOR(arr1,arr2);
  cout << ans;

  return 0;
}