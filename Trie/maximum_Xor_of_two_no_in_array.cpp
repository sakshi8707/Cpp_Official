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
      return links[bit];
    }

    void put(int bit, Node* node)
    {
      links[bit] = node;
    }
};

class Tri_____________________e{
  private:
    Node *root;
    Trie()

  public:

}

int main(){
    



return 0;
}