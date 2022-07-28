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

node* Reverse(node* head)
{
  node *p = NULL,*c=head,*n=head->next;
  while(c!=NULL)
  {
    c->next = p;
    p=c;
    c=n;
    if(n!=NULL)
    {
      n=n->next;
    }
  }
  return p;
}
node* ReverseRecursive(node* head)
{
  // node* temp = head->next;
    if(head->next==NULL)
  {
    return head;
  }
  node* newHead = ReverseRecursive(head->next);
  head->next->next =head;
  head->next = NULL;
return newHead;
}

node* Recursive(node* head)
{
  if(head==NULL)
  {
    return NULL;
  }
return ReverseRecursive(head);
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
node* newHead = Reverse(head);
cout<<"three iterative approch---"<<endl;
Display(newHead);
node* newHead2 =         Recursive(head);
Display(newHead2);
  return 0;
}