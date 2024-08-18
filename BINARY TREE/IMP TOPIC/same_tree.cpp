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
	bool isSameTree(TreeNode* & p, TreeNode* & q) {
		// Your code goes here
        if(p==NULL && q==NULL)
        {
            return true;
        }

        if(p==NULL || q==NULL || p->data !=q->data)
        {
               return false;
        }
        return  isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
	}
};
 

int main()
{

  return 0;
}