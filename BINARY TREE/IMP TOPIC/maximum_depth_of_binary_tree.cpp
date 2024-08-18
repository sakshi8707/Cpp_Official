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


// **using recursive method **
// TC : o(height of tree)
// Sc : recursion stack 

// class Solution {
// public:
// 	int maxDepth(TreeNode* & root) {
// 		// Your code goes here
//     if(root==NULL)
//     {
//       return 0;
//     }
//     int lh = maxDepth(root->left);
//     int lr = maxDepth(root->right);
//     return 1 + max(lh, lr);
//   }
// };


// **using level order method **
// TC : o(3n) for worst case
// Sc : o(4n)   

class Solution {
public:
	int maxDepth(TreeNode* & root) {

    int maxSize = 0;
    vector<vector<int>> ans;
      if(root==NULL)
        return maxSize;
      queue<TreeNode *> q;
      q.push(root);

      while(!q.empty())
      {
        int size = q.size();
        vector<int> levels;
        for (int i = 0; i < size;i++)
        {
          TreeNode *tempNode = q.front();
          q.pop();
          if (tempNode->left != NULL)
          {
            q.push(tempNode->left);
           }
           if(tempNode->right!=NULL)
           {
             q.push(tempNode->right);
           }
           levels.push_back(tempNode->data);
        }
        ans.push_back(levels);
          maxSize++;
      }
      return maxSize;
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
  int ans = obj.maxDepth(root);
  cout << ans << endl;
  return 0;
}