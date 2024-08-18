#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
        20
       /  \
      8   22
     / \
    4  12
      /  \
     10  14
         / \
        21  24

*/
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


class Solution{
  public:
  
  bool isLeaf(TreeNode * root) {
  return !root -> left && !root -> right;
  }
  //traversing left boundary of tree
  void addLeftBoundary(TreeNode* root,vector<int>& ans)
  {
    TreeNode *curr = root->left;
    while(curr!=NULL)
    {
      if(isLeaf(curr)==false) 
      {
        ans.push_back(curr->data);
      }
      if(curr->left!=NULL)
      {
        curr = curr->left;
      }
      else
      {
        curr = curr->right;
      }
    }
  }

  void addRightBoundary(TreeNode* root,vector<int>& ans)
  {
    vector<int> temp;
    TreeNode *curr = root->right;
    while (curr!=NULL)
    {
      if(isLeaf(curr)==false)
      {
        temp.push_back(curr->data);
      }
      if(curr->right!=NULL)
      {
        curr = curr->right;
      }
      else
      {
        curr = curr->left;
      }
    }
    //now putting temp values into ans array for reverse
    for (int i = temp.size() - 1; i >= 0;i--)
    {
      ans.push_back(temp[i]);
    }
  }

  //for leaf node traversing preorder traversal
  void addLeaves(TreeNode *root, vector<int>& ans)
  {
    TreeNode *curr = root;
    if(isLeaf(curr)==true)
    {
      ans.push_back(curr->data);
      return;
    }
    if(curr->left!=NULL)
    {
      addLeaves(curr->left,ans);
    }
    if(curr->right!=NULL)
    {
      addLeaves(curr->right,ans);
    }
  }

      vector<int> printBoundary(TreeNode *root)
  {
    vector<int> ans;
    if(root==NULL)
      return ans;
    if(isLeaf(root)==false)
    {
      ans.push_back(root->data);
    }
    addLeftBoundary(root, ans);
    addLeaves(root, ans);
    addRightBoundary(root, ans);
    return ans;
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
    Solution obj;
    vector<int> ans = obj.printBoundary(root);
    for(auto it : ans)
    {
       
                cout << it << " ";
    }
  return 0;
}