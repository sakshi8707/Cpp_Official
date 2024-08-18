#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void postorderTraversal(NArrayTreeNode* root, vector<int>& ans) {
        if (root == nullptr) {
            return;
        }
        for (auto child : root->children) {
            postorderTraversal(child, ans);
        }
        ans.push_back(root->data);
    }

    vector<int> postorder(NArrayTreeNode* root) {
        vector<int> ans;
        postorderTraversal(root, ans);
        return ans;
    }
};


int main()
{

  return 0;
}