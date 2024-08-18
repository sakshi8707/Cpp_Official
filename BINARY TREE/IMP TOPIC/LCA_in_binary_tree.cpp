// Q. find the lowest common ancestor


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

TreeNode* insert(TreeNode* root, int val)
{
    if (root == NULL)
    {
        return new TreeNode(val);
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    return root;
}


// **better approch**
// **TC : o(n)** traversing all the node

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL || root == p || root==q)
        {
          return root;
        }
        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);

        if(left==NULL)
        {
          return right;
        }
        else if(right == NULL)
        {
          return left;
        }
        else
        {
          return root;
        }
    }
};


int main()
{
   int n;
    cin >> n;          //taking no of nodes
    TreeNode *root = NULL;
    for (int i = 0; i < n;i++)
    {
            int a;
            cin >> a;
            root = insert(root,a);
    }
    int a, b;
    cin >> a >> b;
    TreeNode *p = new TreeNode(a);
    TreeNode *q = new TreeNode(b);
    Solution obj;
    TreeNode *ans = obj.lowestCommonAncestor(root, p, q);
    cout << ans->data << endl;
    return 0;
}