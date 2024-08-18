#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{
  public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
      data = val;
      left = right = NULL;
    }
};

TreeNode *insertNode(TreeNode *root, int val)
{
  if(root==NULL)
  {
      return new TreeNode(val);
  }
  if(val<root->data)
  {
      root->left = insertNode(root->left, val);
  }
  else
  {
      root->right = insertNode(root->right, val);
  }
  return root;
}

class solution{
  public:
  vector<int> inorderTraversal(TreeNode* node)
  {
    //**iterative method
      vector<int> inorder;
      stack<TreeNode *> st;
      TreeNode *root = node;
    
      while(!st.empty())
      {
        if(root!=NULL)
        {
          st.push(root);
          root = root->left;
        }
        else
        {
          if(st.empty() == true)
            break;
          root = st.top();
          st.top();
          inorder.push_back(root->data);
          root = root->right;
        }
      }
      return inorder;
  }
};

int main()
{
  int n;
  cin >> n;
  vector<int> ans;
  TreeNode *root = NULL;
  for (int i = 0; i < n;i++)
  {
      int a;
      cin >> a;
    root =   insertNode(root,a);
  }

  solution obj;
  vector<int> inorder = obj.inorderTraversal(root);
  for(auto it : inorder)
  {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}