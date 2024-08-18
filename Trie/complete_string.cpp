#include<bits/stdc++.h>
using namespace std;

class Node{
  public:

    Node* links[26];
    bool flag = false;

    bool isContains(char ch)
    {
      return (links[ch - 'a'] != NULL);
    }

    Node* get(char ch)
    {
      return links[ch -'a'];
    }

    void put(char ch, Node* node)
    {
      links[ch - 'a'] = node;
    }

    void setEnd()
    {
      flag = true;
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

    void insert(string s)
    {
      Node *node = root;
      for (int i = 0; i < s.length();i++)
      {
        if(!node->isContains(s[i]))
        {
          node->put(s[i], new Node());
        }
        node = node->get(s[i]);
      }
      node->setEnd();
    }
};

class Solution {
public:
	string completeString(vector<string>& a) {
		// Your code goes here
    int n = a.size();
    Trie trie;
    //inserting all the strings in tree
    for (int i = 0; i < n;i++)
    {
      trie.insert(a[i]);
    }

    //now traversing in tree and checking that every node of trie contains trur or not ,if not then returning 0 len or else no of nodes
    
  }
};



int main(){
    


return 0;
}