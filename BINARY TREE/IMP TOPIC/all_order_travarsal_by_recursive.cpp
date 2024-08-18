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

TreeNode* insertNode(TreeNode* root,int val)
{
  if(root == NULL)
  {
      return new TreeNode(val);
  }
  if(val<root->data)
  {
      root->left = insertNode(root->left, val);
  }
  if(val>root->data)
  {
      root->right = insertNode(root->right, val);
  }
  return root;
}


//**inorder traversal

class Solution{
  public:
  

  void inorderTraversal(TreeNode* root,vector<int>& inorder) //(left , root , right)
  {
    if(root==NULL)
    {
      return;
    }
    inorderTraversal(root->left,inorder);
    inorder.push_back(root->data);
    inorderTraversal(root->right, inorder);
  }


  void postOrderTraversal(TreeNode* root,vector<int>& postorder)      //(left , root , right)
  {
    if(root==NULL)
    {
      return;
    }
    inorderTraversal(root->left,postorder);
    inorderTraversal(root->right, postorder);
    postorder.push_back(root->data);
  }


  void preOrderTraversal(TreeNode* root,vector<int>& preorder)      //(left , root , right)
  {
    if(root==NULL)
    {
      return;
    }
    preorder.push_back(root->data);
    inorderTraversal(root->left,preorder);
    inorderTraversal(root->right, preorder);
  }
};



int main()
{
  int n;
  cin >> n;
  vector<int> arr;
  TreeNode *root = NULL;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    root = insertNode(root, a);
  }

  vector<int> inorder;
  vector<int> preorder;
  vector<int> postorder;

  Solution obj;
  obj.inorderTraversal(root, inorder);
  obj.postOrderTraversal(root, postorder); 
  obj.preOrderTraversal(root, preorder);

  for(auto it : inorder)
  {
    cout << it << " ";
  }
  cout << endl;

  
  for(auto it : postorder)
  {
    cout << it << " ";
  }
  cout << endl;

  
  for(auto it : preorder)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}