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

TreeNode* insertNode(TreeNode* root, int val)
{
    if (root == NULL)
    {
        return new TreeNode(val);
    }

    if (val < root->data)
    {
        root->left = insertNode(root->left, val);
    }
    else
    {
        root->right = insertNode(root->right, val);
    }

    return root;
}

// **brute approch: using inorder traversal**
// **TC : o(n)+o(n) , SC : o(n) + o(H)**

class Solution {
public:
    void inorder(TreeNode* root, vector<int> &ans) {
        //base case
        if(root == NULL)
            return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);

        int i=0, j=ans.size()-1;
        while(i<j){
            int sum = ans[i] + ans[j];
            if(sum == k)
                return true;
            else if(sum > k)
                j--;
            else
                i++;
        }
        return false;
    }
};



// **better approch :  Binary search tree approach**
// **TC : o(n)**


int main()
{
TreeNode *root = NULL;
  int n;
  cin >> n;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    root = insertNode(root, a);
  }

  Solution obj;
  int key;
  cin >> key;
  TreeNode *newNode = obj.deleteNode(root, key);
  {
    //printing all the nodes
  }
  return 0;
}