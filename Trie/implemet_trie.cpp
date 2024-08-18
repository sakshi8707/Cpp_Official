#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **brute approch**
// **TC      , SC  **

class Node{
	public:
	char data;
	Node* children[26];
	bool endNode = false;
};

class Trie {
public:
  Node* root;	
	Trie() {
        root = new Node();
	}

	void insert(string word) {
		// Your code goes here
          Node* temp = root;
		for(int i=0;i<word.size();i++)
		{
			int childIndex = word[i]-'a';
			if(temp->children[childIndex] == NULL)
			{
                     temp->children[childIndex] 	= new Node();
			}
			temp = temp->children[childIndex];
		}
		temp->endNode = true;
	}

	bool search(string word) {
		// Your code goes here
		Node* temp = root;
		for(int i=0;i<word.size();i++)
		{
			int childIndex = word[i]-'a';
			if(temp->children[childIndex] == NULL)
			{
                     return false;
			}
			temp = temp->children[childIndex];
		}
		return temp->endNode;
	}

	bool startsWith(string prefix) {
		// Your code goes here
		Node* temp = root;
		for(int i=0;i<prefix.size();i++)
		{
			int childIndex = prefix[i]-'a';
			if(temp->children[childIndex] == NULL)
			{
                     return false;
			}
			temp = temp->children[childIndex];
		}
		return true;
	}
};

// **better approch ( by striver )**


class Trie {
public:
    Trie() {
        
    }
    
    void insert(string word) {
        
    }
    
    bool search(string word) {
        
    }
    
    bool startsWith(string prefix) {
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

int main()
{

  return 0;
}