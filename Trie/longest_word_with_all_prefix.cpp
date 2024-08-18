#include<bits/stdc++.h>
using namespace std;
//https://leetcode.ca/2021-07-14-1858-Longest-Word-With-All-Prefixes/

// Time: O(N)* O(Len)
// Space: O(N * Len)

class Node{
  public:
    Node *links[26];
    bool flag = false;

    bool containsKey(char ch)
    {
      return (links[ch - 'a'] != NULL);
    }

    Node* get(char ch)
    {
      return links[ch - 'a'];
    }

    void put(char ch,Node* node)
    {
      links[ch - 'a'] = node;
    }

    void setEnd()
    {
      flag = true;
    }

    bool isEnd()
    {
      return flag;
    }
};

class Trie{
  private:
    Node* root;

  public:
  Trie(){
    root = new Node();
  }

  public:
  void insert(string word)
  {
    Node *node = root;
    for (int i = 0; i < word.length();i++)
    {
      if(!node->containsKey(word[i]))
      {
        node->put(word[i], new Node());
      }
      node = node->get(word[i]);
    }
    node->setEnd();
  }

  bool checkPrefixExist(string word)
    {
      bool f1 = true;
      Node *node = root;
      for (int i = 0; i < word.length();i++)
      {
        if(node->containsKey(word[i]))
        {
          node = node->get(word[i]);
          if(node->isEnd() == false)
            return false;
        }
        return false;
      }
      return true;
    }
};

class Solution {

    
public:
    string longestWord(vector<string>& A) {

      int n = A.size();
      Trie trie;
      for(auto it : A)
      {
        trie.insert(it);
      }
      string longest = "";
      for (auto &it : A)
      {
        if(trie.checkPrefixExist(it))
        {
          if(it.length()>longest.length())
          {
            longest = it;
          }
          else if(it.length() == longest.length()&& it<longest)
          {
            longest = it;
          }
        }
      }
      if(longest==" ")
      {
        return "None";
      }
      else
      {
        return longest;
      }
    }
};


int main(){
    


return 0;
}