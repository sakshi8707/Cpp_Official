#include<bits/stdc++.h>
using namespace std;

class node
{
  public:
  int data;
  node* next;
  node(int val) 
  {
    data = val;
    next = NULL;
  }
};

void InsertAtTail(node* &head,int val)
{
  node* n = new node(val);
  if(head==NULL)
  {
    head = n;
    return;
  }
  node* temp = head;
  while(temp->next!=NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

void Display(node* head)
{
  node* temp= head;
  while(temp!=NULL)
  {
    cout<<temp->data<<"->"<<" ";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}

node* RemoveDuplicate(node* head)
{
  if(head==NULL)
  {
    return head;
  }  
  node* temp = head;
  node *p = 0,*c= head,*n = head->next;
  while(head!= NULL)
  {
    p->next = head;
  }
  return p;
}

int main()
{
node* head = NULL;
int n; 
cin>>n;       
int arr[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
for(int i=0;i<n;i++)
{
  InsertAtTail(head,arr[i]);
}
Display(head);
node* newHead = RemoveDuplicate(head);
Display(newHead);
  return 0;
}