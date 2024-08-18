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
    
    int diameterTree(TreeNode* &root,int diameter)
    {
      if(root==NULL)
      {
        return 0;
      }
      int lh = diameterTree(root->left,diameter);
      int lr = diameterTree(root->right,diameter);
      diameter = max(diameter, lh + lr);
      diameterOfBinaryTree(root->left);
      diameterOfBinaryTree(root->right);
      return 1 + max(lh, lr);
    }

    int diameterOfBinaryTree(TreeNode* & root)  {
      int diameter = INT_MIN;
       diameterTree(root, diameter);
       return diameter;
    }
};

// **better approch**
// Tc : o(n)

class Solution {
public:
	int diameterOfBinaryTree(TreeNode* & root) {
		// Your code goes here
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
      root = insertNode(root, a);
  }

  Solution obj;
  bool ans = obj.isBalanced()
  return 0;
}