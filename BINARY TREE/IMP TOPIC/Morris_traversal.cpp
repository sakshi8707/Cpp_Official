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


// **burte approch  (Threded binary tree) **
// **TC: O(N) , SC : constant **

// why to use morris : it is efficient in terms of space complexity we can use it in inorder, preorder and traversals

class Solution
{
  public:
  
  vector<int>  getInorderMorris(TreeNode* root)
  {
    vector<int> inorder;
    TreeNode *curr = root;

    while(curr!=NULL)
    {

      //if left node is null then no need to do
      if(curr->left==NULL)
      {
        inorder.push_back(curr->data);
        curr = curr->right;
      }
      else
      {
      // left node is present then do operation 

      //find rightmost node and make connection of thread
      TreeNode *prev = curr->left;
      while(prev->right!=NULL && prev->right!=curr)
      {
        prev = prev->right;
      }
      //if no thread connection then make it 
      if(prev->right==NULL)
      {
        prev->right = curr;
        curr = curr->left;
      }
      // if there's thread then remove it
      else
      {
        prev->right = NULL;
        inorder.push_back(curr->data);
        curr = curr->right;
      }

      }
    }
    return inorder;
  }

// **Morris Traversal for preOrder **


  vector<int>  getPreorderMorris(TreeNode* root)
  {
    vector<int> preorder;
    TreeNode *curr = root;

    while(curr!=NULL)
    {

      //if left node is null then no need to do
      if(curr->left==NULL)
      {
        preorder.push_back(curr->data);
        curr = curr->right;
      }
      else
      {
      // left node is present then do operation 

      //find rightmost node and make connection of thread
      TreeNode *prev = curr->left;
      while(prev->right!=NULL && prev->right!=curr)
      {
        prev = prev->right;
      }
      //if no thread connection then make it 
      if(prev->right==NULL)
      {
        prev->right = curr;
        preorder.push_back(curr->data);
        curr = curr->left;
      }
      // if there's thread then remove it
      else
      {
        prev->right = NULL;
        curr = curr->right;
      }

      }
    }
    return preorder;
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
  vector<int> ans = obj.getInorderMorris(root);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  cout << "\n preOrde" << endl;
  vector<int> ans2 = obj.getPreorderMorris(root);
  for(auto it : ans2)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}