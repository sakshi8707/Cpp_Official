#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  class solution{
    public:

    vector<int> inorderTraversal(TreeNode *root)
    {
      stack<TreeNode *> st;
      vector<int> inorder;
      TreeNode *node = root;
      while(true)
      {
        if(node!=NULL)
        {
          st.push(node);
          node = node->left;
        }
        else
        {
          if(st.empty())
          {
            break;
          }

            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right; 
        }
      }
      return inorder;
    }
  }

int main()
{

  return 0;
}