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

// **TC : o(n)+o(logn)  for multiset**
// **sc : o(n)+o(n)    == 3o(n)

class Solution {
public:
	vector<vector<int>> verticalTraversal(TreeNode* & root) {
		// Your code goes here
            map<int, map<int, multiset<int>>> mp;
            queue<pair<TreeNode *, pair<int, int>>> q;
            q.push({root, {0, 0}});

            while(!q.empty())
            {
                auto temp = q.front();
                q.pop();
                TreeNode *node = temp.first;
                //taking vertical-v and levels as l

                int v = temp.second.first;
                int l = temp.second.second;

                mp[v][l].insert(node->data);

                if(node->left)
                {
                    q.push({node->left, {v - 1, l + 1}});
                }

                if(node->right)
                {
                    q.push({node->right, {v + 1, l + 1}});
                }
            }

            vector<vector<int>> ans;
            for(auto it : mp)
            {
                vector<int> verticals;
                for(auto i : it.second)
                {
                    verticals.insert(verticals.end(), i.second.begin(), i.second.end());
                }
                ans.push_back(verticals);
            }
            return ans;
    }
};


int main()
{
    int n;
    cin >> n;          //taking no of nodes
    TreeNode *root;
    for (int i = 0; i < n;i++)
    {
            int a;
            cin >> a;
            root = insertNode(a, root);
    }
    Solution obj;
    vector<vector<int>> ans = obj.verticalTraversal(root);
    for(auto it : ans)
    {
        for(auto i : it)
        {
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}