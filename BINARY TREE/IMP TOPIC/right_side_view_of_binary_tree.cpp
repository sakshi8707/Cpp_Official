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
    
    void findRight(TreeNode* root,int level,vector<int>& ans)
    {
      if(root==NULL)
      {
        return;
      }
      if(ans.size()==level)
      {
        ans.push_back(root->data);
      }
      findRight(root->right, level + 1, ans);
      findRight(root->left, level + 1, ans);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        int level = 0;
        vector<int> ans;
        findRight(root, level,ans);
        return ans;
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
    vector<int> ans = obj.rightSideView(root);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
