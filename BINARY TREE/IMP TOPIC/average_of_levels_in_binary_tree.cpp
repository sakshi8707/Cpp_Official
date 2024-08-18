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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double> ans;
        
        while (!q.empty()) {
            int levelSize = q.size();
            double levelSum = 0;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* curr = q.front();
                q.pop();
                levelSum += curr->data;
                
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }
            
            ans.push_back(levelSum / levelSize);
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
  vector<double> ans = obj.averageOfLevels(root);
    for(auto i : ans)
    {
        cout << i << " ";
    }
  
  return 0;
}