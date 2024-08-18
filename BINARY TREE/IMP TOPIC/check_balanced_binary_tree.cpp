#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{
  public:
    int data;
    TreeNode *right, *left;
    TreeNode(int val)
    {
      data = val;
      right = left = NULL;
    }
};

TreeNode* insertNode(TreeNode* root , int val)
{
  if(root==NULL)
  {
      return new TreeNode(val);
  }
  if(val<root->data)
  {
      root->left = insertNode(root->left,  val);
  }
  if(val>root->data)
  {
      root->right = insertNode(root->right,  val);
  }
  return root;
}

// **brute approch**
// TC : o(n)*o(n)    for lh,rh and for left,right


class Solution {
public:

    int findHleft(TreeNode* root)
    {
      
    }
    
    int findHright(TreeNode* root)
    {

    }

    bool isBalanced(TreeNode* root) {
      if(root==NULL)
      {
        return true;
      }

      int lh = findHleft(root->left);
      int lr = findHright(root->right);
      if(abs(lh-lr)>1)
        return false;
      bool left = isBalanced(root->left);
      bool right = isBalanced(root->right);
      if(!left || !right)
      {
        return false;
      }
      return true;
    }
};

// **better approch**
// Tc : o(n)

class Solution {
public:
    bool isBalanced(TreeNode* root) {
      return dfsHeight(root) != -1;
    }


    int dfsHeight(TreeNode* root)
    {
      if(root==NULL)
        return 0;
      int leftHeight = dfsHeight(root->left);
      if(leftHeight==-1)
      {
        return -1;
      }
      int rightHeight = dfsHeight(root->right);
      if(rightHeight==-1)
      {
        return -1;
      }
      if(abs(leftHeight-rightHeight) > 1)
      {
        return -1;
      }

      return max(leftHeight, rightHeight) + 1;
    }

    //isbalanced 
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
      root = insertNode(root, a);
  }

  Solution obj;
  bool ans = obj.isBalanced()
  return 0;
}