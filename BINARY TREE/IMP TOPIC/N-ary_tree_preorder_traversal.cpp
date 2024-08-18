#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class NArrayTreeNode{
  public:
  

};



class Solution {
public:
    void preorderTraversal(NArrayTreeNode* root, vector<int>& ans) {
        if (root == nullptr) {
            return;
        }
        ans.push_back(root->data);
        for (auto child : root->children) {
            preorderTraversal(child, ans);
        }
    }

    vector<int> preorder(NArrayTreeNode* root) {
        vector<int> ans;
        preorderTraversal(root, ans);
        return ans;
    }
};


int main()
{
  
  return 0;
}