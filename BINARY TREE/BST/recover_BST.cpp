#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{
  public:
    int data;
    TreeNode *left, *right;
    TreeNode(int val)
    {
      data = val;
      left = right = NULL;
    }
};

TreeNode* insert(TreeNode* root,int val)
{
  if(root==NULL)
  {
      return new TreeNode(val);
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


// **burte approch  (find inorder , then verify node and change) **
// **TC: O(N)+o(N logN) , SC : o(N) **

class Solution {
public:
    void recoverTree(TreeNode* root) {
        
    }
};


// **better approch  ( ) **
// **TC: O(N) , SC : constant **

class Solution {
private:
  TreeNode *first, *prev, *middle, *last;
private:
void inorder(TreeNode* root)
{
  if(root==NULL)
    return;
  inorder(root->left);
  if(prev !=NULL && (root->val < prev->val))
  {
    if(first==NULL)
    {
      first = prev;
      middle = root;
    }
    else
    {
      last = root;
    }

  }
  prev = root;
  inorder(root->right);
}

public:
    void recoverTree(TreeNode* root) {
      first = middle = last = NULL;
      prev = new TreeNode(INT_MIN);
      inorder(root);
      if(first && last )
        swap(first->val, last->val);
      else if(first && middle)
        swap(first->val, middle->val);
    }
};

int main()
{
  TreeNode *root = NULL;
  int n;
  cin >> n;
  for (int i = 0; i < n;i++)
  {
      int a;
      cin >> a;
      root = insert(root, a);
  }
  
  Solution obj;


  return 0;
}