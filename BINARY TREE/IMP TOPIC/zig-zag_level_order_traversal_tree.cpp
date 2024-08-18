#include<iostream>
#include<bits/stdc++.h>
using namespace std;


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


class Solution {
public:
	vector<vector<int>> zigzagLevelOrder(TreeNode* & root) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool flag = true;
        while(!q.empty())
        {
            int size = q.size();
            vector<int> levels;
            for(int i=0;i<size;i++)
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
            flag = !flag;
            if(flag==true)
            {
                reverse(levels.begin(), levels.end());
            }
            ans.push_back(levels);
        }
        return ans;
  }
};


int main()
{

  return 0;
}