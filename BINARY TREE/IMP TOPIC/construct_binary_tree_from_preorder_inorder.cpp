#include<iostream>
#include<bits/stdc++.h>
using namespace std;



class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
    
        TreeNode() {
        }
        
        TreeNode(int data) {
            this->data = data;
        }
        
        TreeNode(int data, TreeNode* left, TreeNode* right) {
            this->data = data;
            this->left = left;
            this->right = right;
        }
};


  class Solution {
  public:

    TreeNode*  buildTree(vector<int>& preorder , int preStart,int preEnd,vector<int>& inorder,int inStart,int inEnd,map<int,int>& mp)
    {
      if(preStart>preEnd || inStart>inEnd)
      {
        return NULL;
      }
      TreeNode *root = new TreeNode(preorder[preStart]);

      int inRoot = mp[root->data];
      int numLeft = inRoot - inStart;

      root->left = buildTree(preorder, preStart + 1, preStart + numLeft, inorder, inStart, inRoot-1, mp);

      root->right = buildTree(preorder, preStart + 1+numLeft, preEnd , inorder, inRoot+1, inEnd, mp);

      return root;
    }


    TreeNode*  buildTree(vector<int>& preorder, vector<int>& inorder) {
      // Your code goes here
      map<int, int> mp;
      // map contains inorder eleme-index
      for (int i = 0; i < inorder.size();i++)
      {
        mp[inorder[i]]=i;
      }
      TreeNode *root = buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mp);
      return root;
    }
  };


int main()
{

  return 0;
}