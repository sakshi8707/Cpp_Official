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


TreeNode* insertNode(int val, TreeNode* root)
{
    if (root == NULL)
    {
        return new TreeNode(val);
    }

    if (root->left == NULL)
    {
        root->left = insertNode(val, root->left);
    }
    else if (root->right == NULL)
    {
        root->right = insertNode(val, root->right);
    }
    else
    {
        root->left = insertNode(val, root->left);
    }

    return root;
}


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
       return merge(root1,root2); 
    }

    TreeNode* merge(TreeNode* root1,TreeNode* root2)
    {
        if(!root1 && !root2)
        {
            return NULL;
        }
        int val = (root1!=NULL ? root1->val:0)+(root2!=NULL ? root2->val : 0);
        TreeNode* newNode = new TreeNode(val);

        newNode->left = merge(root1!=NULL ? root1->left:NULL  , root2!=NULL ? root2->left:NULL);
                newNode->right = merge(root1!=NULL ? root1->right:NULL  , root2!=NULL ? root2->right:NULL);

                return newNode;
    }
};


int main()
{
    int n1;
    cin >> n1; // taking no of nodes
    int n2;
    cin >> n2; // taking no of nodes
    TreeNode *root1 = NULL;
    TreeNode *root2 = NULL;
    for (int i = 0; i < n1; i++)
    {
        int a;
        cin >> a;
        root1 = insertNode(a, root1);
    }
    for (int i = 0; i < n2; i++)
    {
        int a;
        cin >> a;
        root2 = insertNode(a, root2);
    }
    Solution obj;
    vector<int> ans = obj.mergeTrees(root1,root2);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}