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
  stack<node*> st;
  node *node = root;
  vector<int> inorder;
  
  
}

vector<int> preOrderTraversal(node* root)           //(root,left,right)
{
  vector<int> preorder;
  if(root==NULL)
  {
    return preorder;
  }
  stack<node*> st;
  st.push(root);
  while(!st.empty())
  {
    node *temp = st.top();
    preorder.push_back(temp->data); 
    st.pop();
    if(!temp->right)
    {
      st.push(temp->right);
    }
    if(!temp->left)
    {
      st.push(temp->left);
    }
  }
  return preorder;
}

vector<int> postOrderTraversal(node* root)           //(left,right,root)
{
   vector<int> postOrder;
  if(root==NULL)
  {
      return postOrder;
  }
  stack<node *> st1;
  stack<node *> st2;
  st1.push(root);
  while(!st1.empty())
  {
    node *curr = st1.top();
    st1.pop();
    st2.push(curr);
    if(!curr->right)
    {
      st1.push(root->right);
    }
    if(!curr->left)
    {
      st1.push(root->left);
    }
  }
  while(!st2.empty())
  {
    postOrder.push_back(st2.top()->data);
    st2.pop();
  }
  return postOrder;
}


class Solution {
public:
    vector<vector<int>> levelOrder(node* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++)
            {
                node* nodde = q.front();
                q.pop();
                if(nodde->left!=NULL)
                {
                    q.push(nodde->left);
                }
                if(nodde->right!=NULL)
                {
                    q.push(nodde->right);
                }
                level.push_back(nodde->data);
            }
            ans.push_back(level);
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
  vector<int> inOrder = inOrderTraversal(root);
  for(auto it : inOrder)
  {
      cout << it << " ";
  }
  cout << endl;
  cout << "\n postOrder " << endl;
  vector<int> postOrder = postOrderTraversal(root);
  for(auto it : postOrder)
  {
      cout << it << " ";
  }
  cout << endl;
  cout << "\n preOrder " << endl;
  vector<int> preOrder = preOrderTraversal(root);
  for(auto it : preOrder)
  {
      cout << it << " ";
  }
  cout << endl;


  return 0;
}