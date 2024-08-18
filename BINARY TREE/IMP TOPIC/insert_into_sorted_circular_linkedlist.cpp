#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class SinglyLinkedListNode{
  public:
    int val;
    SinglyLinkedListNode *left;
    SinglyLinkedListNode *right;
    SinglyLinkedListNode(int data)
    {
      val = data;
      left = right = NULL;
    }
};

SinglyLinkedListNode* insert(SinglyLinkedListNode* root,int data)
{
  if(root==NULL)
      return new SinglyLinkedListNode(data);
  if(data<root->val)
  {
      root->left = insert(root->left, data);
  }
  else
  {
      root->right = insert(root->right, data);
  }
  return root;
}


class Solution {
public:
	SinglyLinkedListNode*  insert(SinglyLinkedListNode* & head, int insertVal) {
		// Your code goes here
      SinglyLinkedListNode *temp = head;
      if(head==NULL)
      {
        head->next = insertVal;
      }
      while(temp->val < temp->next->val)
      {
             
      }
  }
};

int main()
{
  node *root = NULL;
  int n;
  cin >> n;
  for (int i = 0; i < n;i++)
  {
      int a;
      cin >> a;
      root = insert(root, a);
  }
  
  return 0;
}