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
  else
  {
      root->right = insert(root->right, val);
  }
  return root;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
      string ans = "";
      if(root==NULL)
      {
        return "";
      }
      queue<TreeNode *> q;
      q.push(root); 
      while(!q.empty())
      {
        TreeNode *temp = q.front();
        q.pop();
        if(temp==NULL)
        {
          ans.append("#,");
        }
        else
        {
          ans.append(to_string(temp->data) + ',');
        }
        if(temp!=NULL)
        {
          q.push(temp->left);
          q.push(temp->right);
        }
      }
      cout << ans << endl;
      return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
      if(data.size()==0)
        return NULL;
      stringstream ss(data);
      string str;
      getline(ss, str, ',');
      TreeNode *root = new TreeNode(stoi(str));
      queue<TreeNode *> q;
      q.push(root);
      while(!q.empty())
      {
        TreeNode *temp = q.front();
        q.pop();

        //for left insertion on treee
        getline(ss, str, ',');

        if(str =="#")
        {
          temp->left = NULL;
        }
        else
        {
          TreeNode *leftNode = new TreeNode(stoi(str));
          temp->left = leftNode;
          q.push(leftNode);
        }

        //for right node insertion on treee
        getline(ss, str, ',');

        if(str =="#")
        {
          temp->right = NULL;
        }
        else
        {
          TreeNode *rightNode = new TreeNode(stoi(str));
          temp->right = rightNode;
          q.push(rightNode);
        }
      }
      return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));

int main()
{
  TreeNode *root = NULL;
  int n;
  cin >> n;
  for (int i = 0; i < n;i++)
  {
      int a;
      cin >> a;
      root = insert(root, a);
  }
  
  Codec obj;
  string ans = obj.serialize(root);
  cout << "serialize \n "<< ans << endl;
  TreeNode *a = obj.deserialize(ans);


  return 0;
}