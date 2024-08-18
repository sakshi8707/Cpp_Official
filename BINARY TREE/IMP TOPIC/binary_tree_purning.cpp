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


TreeNode* insertNode(int val, TreeNode* root)
{
    if (root == NULL)
    {
        return new TreeNode(val);
    }

    if (root->left == NULL)
    {
        root->left = insertNode(val, root->left);
    }
    else if (root->right == NULL)
    {
        root->right = insertNode(val, root->right);
    }
    else
    {
        root->left = insertNode(val, root->left);
    }

    return root;
}
/*
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
*/

// **TC : o(N)**
// **SC : if skew tree then it is o(H) height of tree**

class Solution {
public:
	TreeNode*  pruneTree(TreeNode* & root) {
      if(!root)
        return NULL;
      root->left = pruneTree(root->left);
      root->right = pruneTree(root->right);
      if(root->left || root->right)
      {
        return root;
      }
      if(root->data == 0)
      {
        return NULL;
      }
      return root;
}
};

int main()
{
   int n;
    cin >> n; // taking no of nodes
    TreeNode *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        root = insertNode(a, root);
    }
    Solution obj;
    vector<int> ans = obj.pruneTree(root);
    for (auto i : ans)
    {
        cout << i << " ";
    }


  return 0;
}