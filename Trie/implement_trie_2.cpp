#include<bits/stdc++.h>
using namespace std;

// **burte approch by faraz**
// **TC : o(n) ** 


class Node {
public:
    int prefixCount = 0;
    bool endNode = false;
    vector<Node*> children;

    Node() {
        children.resize(26, nullptr); // Assuming lowercase English letters
    }
};

class Trie {
public:
    Node* root;

    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* temp = root;
        for (int i = 0; i < word.size(); i++) {
            int childIndex = word[i] - 'a';
            if (temp->children[childIndex] == nullptr) {
                temp->children[childIndex] = new Node();
            }
            temp = temp->children[childIndex];
            temp->prefixCount++; // Increment prefixCount for each character
        }
        temp->endNode = true;
    }

    int countWordsEqualTo(string word) {
        Node* temp = root;
        for (int i = 0; i < word.size(); i++) {
            int childIndex = word[i] - 'a';
            if (temp->children[childIndex] == nullptr) {
                return 0;
            }
            temp = temp->children[childIndex];
        }
        return temp->endNode ? 1 : 0;
    }

    int countWordsStartingWith(string word) {
        Node* temp = root;
        for (int i = 0; i < word.length(); i++) {
            int childIndex = word[i] - 'a';
            if (temp->children[childIndex] == nullptr) {
                return 0;
            }
            temp = temp->children[childIndex];
        }
        return temp->prefixCount + 1; // Account for the word itself
    }

    void erase(string word) {
        Node* temp = root;
        for (int i = 0; i < word.length(); i++) {
            int childIndex = word[i] - 'a';
            if (temp->children[childIndex] == nullptr) {
                return;
            }
            temp = temp->children[childIndex];
            temp->prefixCount--; // Decrement prefixCount for each character
        }
        if (temp->endNode) {
            temp->endNode = false;
        }
    }
};


//**better approch**
// **TC : **
class Node{
    public:
        Node *links[26];
        int cntEndWith = 0;
        int cntPrefix = 0;

        bool containsKey(char ch)
        {
            return (links[ch - 'a'] != NULL);
        }

        Node* get(char ch)
        {
            return links[ch - 'a'];
        }

        void put(char ch , Node* node)
        {
            links[ch - 'a'] = node;
        }

        void increseEnd()
        {
            cntEndWith++;
        }

        void increasePrefix()
        {
            cntPrefix++;
        }

        void deleteEnd()
        {
            cntEndWith--;
        }

        void decreasePrefix()
        {
            cntPrefix--;
        }

        int getEnd()
        {
            return cntEndWith;
        }

        int getPrefix()
        {
            return cntPrefix;
        }
};

class Trie {
    private:
        Node *root;

    public:
        Trie()
        {
            root = new Node();
    }

	void insert(string word) {
		// Your code goes here
        Node *node = root;
        for (int i = 0; i < word.length();i++)
        {
           if(!node->containsKey(word[i]))
           {
               node->put(word[i], new Node());
           }
           node = node->get(word[i]);
           node->increasePrefix();
        }
        node->increseEnd();
    }

	int countWordsEqualTo(string word) {
		// Your code goes here
        Node *node = root;
        for (int i = 0; i < word.length();i++)
        {
            if(node->containsKey(word[i]))
            {
                node = node->get(word[i]);
            }
            else
            {
                return 0;
            }
        }
             return  node->getEnd();
    }

	int countWordsStartingWith(string word) {
		// Your code goes here
        Node *node = root;
        for (int i = 0; i < word.length();i++)
        {
            if(node->containsKey(word[i]))
            {
                node = node->get(word[i]);
            }
            else
            {
                return 0;
            }
        }
             return  node->getPrefix();
	}

	void erase(string word) 
    {
		// Your code goes here
        Node *node = root;
        for (int i = 0; i < word.size();i++)
        {
            if(node->containsKey(word[i]))
            {
                node = node->get(word[i]);
                node->decreasePrefix();
            }
            else
            {
                return;
            }
        }
        node->deleteEnd();
    }
};

int main(){
    


return 0;
}