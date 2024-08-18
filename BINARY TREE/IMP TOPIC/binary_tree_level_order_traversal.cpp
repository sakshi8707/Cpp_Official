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

class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* & root) {
      // Your code goes here
        vector<vector<int>> ans;
        if(root==NULL)
        {
          return ans;
        }
        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty())
        {
          int size = q.size();
          vector<int> levels;
          for (int i = 0; i < size;i++)
          {
            TreeNode *temp = q.front();
            q.pop();
            if(temp->left!=NULL)
            {
              q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
              q.push(temp->right);
            }
            levels.push_back(temp->data);
          }
          ans.push_back(levels);
        }

        return ans;
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
  cout << "\n Leval Order " << endl;
  Solution obj;
  vector<vector<int>> ans = obj.(root);
  for(auto it : ans)
  {
    for(auto i : it)
    {
        cout << i << " ";
    }
  }
  return 0;
}