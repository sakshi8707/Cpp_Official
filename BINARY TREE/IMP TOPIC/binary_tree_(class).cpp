#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
  public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
      data = val;
      left = right = NULL;
    }
};

//inserting node to tree
node* insert(node* root,int val)
{
  if(root==NULL)
  {
      return new node(val);
  }
  if(val<root->data)
  {
      root->left = insert(root->left, val);
  }
  else
  {
      root->right = insert(root->right, val);
  }
  return root;
}

void inorderTraversal(node* root)
{

}

int main()
{
    // node *root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->right = new node(4);

  // **taking input for user
  node *root = NULL;
  int n;
  cin >> n;
  for (int i = 0; i < n;i++)
  {
      int val;
      cin >> val;
      root = insert(root, val);
  }
      // print node
      inorderTraversal(root);

  return 0;
}