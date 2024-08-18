// **odertravarsal by iterative method**
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
  public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
      data = val;
      left = right = NULL;
    }
};

node* insert(node* root,int val)
{
  if(root==NULL)
      return new node(val);
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

vector<int> inOrderTraversal(node* root)           //(left,root,right)
{
  stack<node *> st;
  node *tempNode = st;
  node *node = root;
  vector<int> inorder;
  while(true)
  {
    if(node!=NULL)
    {
      st.push(tempNode);
    }
    else {
      if(st.empty()==true)
      {
        break;
      }
    }
  }
}



vector<int> postOrderTraversal(node* root)           //(left,right,root)
{
   vector<int> postOrder;
  if(root==NULL)
  {
      return postOrder;
  }
  stack<node *> st;
  st.push(root);
  while(!st.empty())
  {
      root = st.top();
      st.pop();
      postOrder.push_back(root->data);
      if(root->right !=NULL)
        st.push(root->right);
      if(root->left !=NULL)
        st.push(root->left);
  }
  return postOrder;
}
//postorder traversal iterative mehtod by faraz on nextleap
/*
class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
    
        TreeNode() {
        }
        
        TreeNode(int data) {
            this->data = data;
        }
        
        TreeNode(int data, TreeNode* left, TreeNode* right) {
            this->data = data;
            this->left = left;
            this->right = right;
        }
};
*/

class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root) {
		// Your code goes here
        stack<TreeNode*> st;
        st.push(root);
        vector<int> ans;
        while(st.size()!=0)
        {
            TreeNode* top_tree   = st.top();
            if(top_tree->left==NULL && top_tree->right==NULL)
            {
                ans.push_back(top_tree->data);
                st.pop();
                continue;
            }
            if(top_tree->right!=NULL)
            {
                TreeNode* right_tree = top_tree->right;
                top_tree->right = NULL;
                st.push(right_tree);
            }
            if(top_tree->left!=NULL)
            {
                TreeNode* left_tree = top_tree->left;
                top_tree->left = NULL;
                st.push(left_tree);
            }
        }
        return ans;
	}
};


int main()
{
  node *root = NULL;
  int n;
  cin >> n;
  for (int i = 0; i < n;i++)
  {
      int a;
      cin >> a;
      root = insert(root, a);
  }
  cout << "\n inOrder " << endl;
  inOrderTraversal(root);
  cout << "\n postOrder " << endl;
  postOrderTraversal(root);
  cout << "\n preOrder " << endl;
  preOrderTraversal(root);
  return 0;
}