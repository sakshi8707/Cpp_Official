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


// **burte approch (by reverse postorder)  **
// **TC: O(N) , SC : o(n) **

// why to use morris : it is efficient in terms of space complexity we can use it in inorder, preorder and traversals

class Solution {
public:
  TreeNode *prev = NULL;
  void flatten(TreeNode *root)
  {
    // for brute approch follow reversw postorde ( N-R-L) 
    if(root==NULL)
    {
      return;
    }
    flatten(root->right);
    flatten(root->left);
    //now making connection with prev and left pointint to null
    root->right = prev;
    root->left = NULL;
    prev = root;
  }
};


// **Better approch (by level order)  **
// **TC: O(N) , SC : o(n) **

class Solution {
public:
    void flatten(TreeNode* root) {
      stack<TreeNode*> st;
      st.push(root);
      while(!st.empty())
      {
        TreeNode *curr = st.top();
        st.pop();
        if(curr->right!=NULL)
        {
          st.push(curr->right);
        }
        if(curr->left!=NULL)
        {
          st.push(curr->left);
        }
          if(!st.empty())
          {
        curr->right = st.top();
          }
        curr->left = NULL;
      }
    }
};

// **optimal approch  (by morris traversal) **
// **TC: O(N) , SC : o(1) **

// why to use morris : it is efficient in terms of space complexity we can use it in inorder, preorder and traversals

class Solution {
public:
    void flatten(TreeNode* root) {
        
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
      root = insert(root, a);
  }
  
  Solution obj;
  cout << "inorder" << endl;
  

  return 0;
}