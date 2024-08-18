
// ** all order traversal in one vedio **

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

TreeNode* insert(TreeNode* root,int val)
{
   if(root==NULL)
   {
      return new TreeNode(val);
   }
   if(val<root->data)
   {
      root->left = insert(root->left, val);
   }
   if(val>root->data)
   {
      root->right = insert(root->right, val);
   }
   return root;
}


class Solution{
  public:
  vector<int> preInPostTraversal(TreeNode* root)
  {
      stack<pair<TreeNode *, int>> st;
      vector<int> in, pre, post;
      st.push({root, 1});
      if(root == NULL)
      {
        return;
      }
      //main traversal

      while(!st.empty())
      {
        auto it = st.top();
        st.pop();
        
        // for preoreder traversal

        if(it.second==1)
        {
          pre.push_back(it.first->data);
          it.second++;
          st.push({it});

          if(it.first->left!=NULL)
          {
            st.push({it.first->left, 1});
          }
        }

        //for inorder traversal

        else if(it.second==2)
        {
          in.push_back(it.first->data);
          it.second++;
          st.push({it});

          
          if(it.first->right!=NULL)
          {
            st.push({it.first->right, 1});
          }
        }
        
        //post traversal

        else
        {
          post.push_back(it.first->data);
        }
        
      }
  }
};

int main()
{
  int n;
  cin >> n;
  TreeNode *root = NULL;
  for (int i = 0; i < n;i++)
  {
      int a;
      cin >> a;
      root = insert(root, a);
  }

  Solution obj;
  vector<int> ans = obj.preInPostTraversal(root);
  for(auto it : ans)
  {
      cout << it << " ";
  }
  cout << endl;
  return 0;
}