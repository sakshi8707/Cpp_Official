#include<bits/stdc++.h>
using namespace std;


// **brute approch**
// **TC : o(n^2) , SC : o(n)**

class Solution {
public:
	int countDistinctSubstrings(string s) {
		// Your code goes here
    set<string> set;
    int n = s.size();
    for (int i = 0; i < n;i++)
    {
      string tempStr = "";
      for (int j = i; j < n;j++)
      {
        tempStr += s[i];
        set.insert(tempStr);
      }
    }
    return set.size();
  }
};


// **better approch**
// **TC : o(n^2)**
// **SC : for trie we cannot measure it , it depends on input to input(it reuses the prev space)**

class Node{
  public:
    Node *links[26];
    
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

};

// class Trie{
//   private:
//     Node *root;

//   public:
//   Trie()
//   {
//     root = new Node();
//   }
// };

class Solution {
public:
	int countDistinctSubstrings(string s) {
		// Your code goes here
    Node *root = new Node();
    int cnt = 0;
    for (int i = 0; i < s.size();i++)
    {
      Node *node = root;
      for (int j = i; j < s.size();j++)
      {
        if (!node->containsKey(s[j]))
        {
          cnt++;
          node->put(s[j], new Node());
        }
        node = node->get(s[j]);
      }
    }
    return cnt+1; //for empty +1
  }
};

int main(){
    


return 0;
}