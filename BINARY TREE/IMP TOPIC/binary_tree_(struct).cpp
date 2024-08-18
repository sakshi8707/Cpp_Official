#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *left;
  struct node *right;
  node(int val)
  {
    data = val;
    left = right = NULL;
  }
};

void inOrderTraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}


int main()
{
  struct node *root = new node(1);
  root->left = new node(2);
  root->left = new node(3);
  root->left->right = new node(5);
  return 0;
}