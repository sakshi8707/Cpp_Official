#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
    
        TreeNode() {
            this->left = this->right = NULL;
        }
        
        TreeNode(int data) {
            this->data = data;
            this->left = this->right = NULL;
        }
        
        TreeNode(int data, TreeNode* left, TreeNode* right) {
            this->data = data;
            this->left = left;
            this->right = right;
        }
};


class Solution {
public:

  void insert(TreeNode *root,int d,int v,int currDepth)
  {
      if(root==NULL)
        return;
      if(currDepth==d-1)
      {
        TreeNode *temp = root->left;
        root->left = new TreeNode(v);
        root->left->left = temp;
        //now taking for right
        temp = root->right;
        root->right = new TreeNode(v);
        root->right->right = temp;
      }
      else
      {
        insert(root->left, d, v, currDepth + 1);
        insert(root->right, d, v, currDepth + 1);
      }
  }

	TreeNode*  addOneRow(TreeNode* & root, int val, int depth) {
		// Your code goes here
    if(depth==1)
    {
        TreeNode *node = new TreeNode(val);
        node->left = root;
        return node;
    }
    
	}
};


int main()
{

  return 0;
}