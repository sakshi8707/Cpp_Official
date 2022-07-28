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

node* Remove(node* head)
{
 if(head==NULL && head->next!=NULL)
 {
   return head;
 }
 node* temp = head;
//   while(temp!=NULL)
 {
    if(temp->data == temp->next->data)
    {
      temp->next = temp->next->next;
    }
    else
    {
    temp = temp->next;
    }
 }
 return temp;

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
node* newHead = Remove(head);
Display(newHead);
  return 0;
}