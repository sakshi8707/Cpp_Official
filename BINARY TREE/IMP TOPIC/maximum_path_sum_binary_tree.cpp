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

//main code


class Solution {
public:
    int path(TreeNode* root,int &maxi)
    {
        if(root==NULL)
        {
            return 0;
        }
        int leftValue = max(0,path(root->left,maxi));
        int rightValue = max(0,path(root->right,maxi));
        maxi = max(maxi,leftValue+rightValue+root->data);
        return max(leftValue,rightValue)+root->data;
    }

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        path(root,maxi);
        return maxi;
    }
};


int main()
{

  return 0;
}