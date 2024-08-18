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
  if(val < root->data)
  {
    root->left = insert(root->left, val);
  }
  else
  {
    root->right = insert(root->right, val);
  }
  return root;
}


class Solution{
  public:
  vector<vector<int>> levelOrder(TreeNode* root)
  {
    vector<vector<int>> ans;
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
        if(tempNode->left!=NULL)
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
        }
        return ans;
  }
};

int main(){
    int n ;
    cin >> n;
    vector<int> arr;
    TreeNode *root = NULL;
    for (int i = 0; i < n;i++)
    {
      int a;
      cin >> a;
      root = insert(root,a);
    }
    Solution obj;
    vector<vector<int>> ans = obj.levelOrder(root);
    for(auto it : ans)
    {
      for(auto i : it)
      {
        cout << i << " ";
      }
    }
      cout << endl;

    return 0;
}