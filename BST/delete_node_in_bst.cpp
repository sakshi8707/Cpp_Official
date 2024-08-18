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

TreeNode* insertNode(TreeNode* root, int val)
{
    if (root == NULL)
    {
        return new TreeNode(val);
    }

    if (val < root->data)
    {
        root->left = insertNode(root->left, val);
    }
    else
    {
        root->right = insertNode(root->right, val);
    }

    return root;
}


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        //creating 3 function = deleteNode + helper + findLastRightChild
      if(root==NULL)
      {
        return NULL;
      }
      if(root->data==key)
      {
        return helper(root);
      }
      //now taking dummy node so that we dont lose original root
      TreeNode *dummy = root;
      while(root!=NULL)
      {
        if(root->data>key)
        {
          if(root->left!=NULL && root->left->data==key)
          {
            root->left = helper(root->left);
            break;
          }
          else
          {
            root = root->left;
          }
        }
        else
        {
          if(root->right!=NULL && root->right->data==key)
          {
            root->right = helper(root->right);
            break;
          }
          else
          {
            root = root->right;
          }
        }
      }

      return dummy;
    }

    TreeNode* helper(TreeNode* root)
    {
      if(root->right==NULL)
      {
        return root->left;
      }
      else if(root->left==NULL)
      {
        return root->right;
      }
      TreeNode *rightChild = root->right;
      TreeNode *lastRightChild_of_left = findLastChild(root->left);
      lastRightChild_of_left->right = rightChild;

      return root->left;
    }

    TreeNode* findLastChild(TreeNode* root)
    {
      if(root->right==NULL)
      {
        return root;
      }
      return findLastChild(root->right);
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
  int key;
  cin >> key;
  TreeNode *newNode = obj.deleteNode(root, key);
  {
    //printing all the nodes
  }
  return 0;
}