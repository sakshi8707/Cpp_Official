#include<bits/stdc++.h>
using namespace std;
 
 class node 
 {
    public: 
  int data ;
  node *next;
  node(int val)
  {
    data = val;
    next = NULL;   
  }
 };

 void InsertAtTail(node *head,int val)
 {
     node* n = new node(val);
     if(head == NULL)
     {
         head = n;
         return;
     }
     node* temp = head;
     while(temp->next != NULL)
     {
         temp = temp->next;
     }
     temp->next = n;
 }
 void display(node* head)
 {
     node* temp = head;
     while(temp->next!=NULL)
     {
         cout<<temp->data <<"->"<<" ";
         temp = temp->next;
     }
     cout<<"NULL"<<endl;
 }

int main()
{
    node* head = NULL;
  int n;cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
    for(int i = 0; i < n; i++)
  {
   InsertAtTail(head,arr[i]);
  }
  display(head);

  return 0;
}