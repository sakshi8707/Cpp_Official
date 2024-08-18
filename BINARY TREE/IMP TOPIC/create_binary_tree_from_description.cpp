#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        TreeNode* root = nullptr;
        unordered_map<int, TreeNode*> m1;
        unordered_map<int, int> m2;

        for (int i = 0; i < descriptions.size(); i++) {
            int par = descriptions[i][0];
            int chil = descriptions[i][1];
            TreeNode* temp_1 = nullptr;
            TreeNode* temp_2 = nullptr;

            if (m1.find(par) == m1.end()) {
                temp_1 = new TreeNode(par);
                m1.emplace(par, temp_1);
            } else {
                temp_1 = m1[par];
            }

            if (m1.find(chil) == m1.end()) {
                temp_2 = new TreeNode(chil);
                m1.emplace(chil, temp_2);
                m2[chil] = 1;
            } else {
                temp_2 = m1[chil];
                m2[chil] = 1;
            }

            if (descriptions[i][2] == 1) {
                temp_1->left = temp_2;
            } else {
                temp_1->right = temp_2;
            }
        }

        for (const auto& entry : m1) {
            if (m2.find(entry.first) == m2.end()) {
                return entry.second;
            }
        }

        return root;
    }
};

int main()
{

  return 0;
}