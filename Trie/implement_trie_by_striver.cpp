#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    Node *links[26];
    bool flag = false;

    bool containsKey(char ch)
    {
      return (links[ch - 'a'] != NULL); // if present it reuturn true
    }

    //creating new reference node
    void put(char ch , Node* node)
    {
      links[ch - 'a'] = node;
    }

    //to get the char , where it is present
    Node* get(char ch)
    {
      return links[ch - 'a'];
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

class Trie {
private:
  // creating node bcs we need it many times 

  Node *root;

public:
    Trie() {
      root = new Node();
    }
    
    void insert(string word) {
      Node *node = root;
      for (int i = 0; i < word.length();i++)
      {
        if(!node->containsKey(word[i]))
        {
          // if key not contains , creating new reference node
          node->put(word[i], new Node());
        }
        //if present ,moves new reference try
       node =  node->get(word[i]); 
      }
      //after inseting all char , set the end flag true
      node->setEnd();
    }
    
    // ** TC : o(n)** 
    bool search(string word) {
      Node *node = root;
      for (int i = 0; i < word.length();i++)
      {
        if(!node->containsKey(word[i]))
        {
          return false;
        }
        node = node->get(word[i]); //for traversing all the node like root->next
      }
      return node->isEnd();
    }
    

    // **returns if theres word start with prefix**
    // ** TC : o(n)** 

    bool startsWith(string prefix) {
      Node *node = root;
      for (int i = 0; i < prefix.length();i++)
      {
            if(!node->containsKey(prefix[i]))
            {
              return false;
            }
          node =   node->get(prefix[i]);  //go to next node
      }
      return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */



int main() {
    Trie* trie = new Trie();

    // Insert words into the Trie
    trie->insert("apple");
    trie->insert("app");
    trie->insert("apricot");
    trie->insert("banana");

    // Search for words
    cout << "Search 'apple': " << (trie->search("apple") ? "Found" : "Not Found") << endl;
    cout << "Search 'ap': " << (trie->search("ap") ? "Found" : "Not Found") << endl;
    cout << "Search 'orange': " << (trie->search("orange") ? "Found" : "Not Found") << endl;

    // Check for prefixes
    cout << "StartsWith 'app': " << (trie->startsWith("app") ? "Found" : "Not Found") << endl;
    cout << "StartsWith 'ban': " << (trie->startsWith("ban") ? "Found" : "Not Found") << endl;
    cout << "StartsWith 'peach': " << (trie->startsWith("peach") ? "Found" : "Not Found") << endl;

    // Take user input and insert into the Trie
    string userInput;
    cout << "Enter a word to insert into the Trie: ";
    cin >> userInput;
    trie->insert(userInput);

    // Search for the newly inserted word
    cout << "Search '" << userInput << "': " << (trie->search(userInput) ? "Found" : "Not Found") << endl;

    delete trie; // Don't forget to delete the Trie to free up memory

    return 0;
}