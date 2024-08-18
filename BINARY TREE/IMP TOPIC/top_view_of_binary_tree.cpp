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

TreeNode* insertNode(int val,TreeNode* root)
{
    if(root==NULL)
    {
            return new TreeNode(val);
    }
    if(val<root->data)
    {
            root->left = insertNode(val, root->left);
    }
    if(val>root->data)
    {
            root->right = insertNode(val, root->right);
    }
    return root;
}


class Solution{
  public:
    vector<int> findTopView(TreeNode *root)
    {
            vector<int> ans;
            queue<pair<TreeNode*, int>> q;
            map<int, int> mp;
            q.push({root, 0});
            while(!q.empty())
            {
              auto node = q.front();
              q.pop();
              TreeNode *nodeVal = node.first;
              int line = node.second;
              if(mp.find(line)==mp.end())
              {
                // mp.insert({line, nodeVal->data});
                mp[line] = nodeVal->data;
              }
              if(nodeVal->left!=NULL)
              {
                q.push({nodeVal, line - 1});
              }
              if(nodeVal->right!=NULL)
              {
                q.push({nodeVal, line + 1});
              }
            }
            //now taking map node values to ans vector

            for(auto it : mp)
            {
              ans.push_back(it.second);
            }
            return ans;
    }
};


    int main()
    {
            int n;
            cin >> n; // taking no of nodes
            TreeNode *root;
            for (int i = 0; i < n; i++)
            {
              int a;
              cin >> a;
              root = insertNode(a, root);
            }
            Solution obj;
            vector<int> ans = obj.findTopView(root);
              for (auto i : ans)
               {
                cout << i << " ";
               }

  return 0;
}