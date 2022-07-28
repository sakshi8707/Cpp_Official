#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data; //
    node* next; //
    node(int val) 
    {
    data = val;   
    next = NULL;
    }
};  
void InsertAtTail(node* &head ,int  val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n; 
        return ;      
    }
    node* temp = head;
    while(temp->next!= NULL)
    {
temp = temp->next;
    }
    temp->next = n;

}

void Reverse(node *s,node *e)
{
    node *p = NULL,*c = s,*n ;
    while(c != e)
    c->next = p;
    p =c;
    c=n;
    while(n->next != e)
    {
        n = n->next;
    }

}

node *ReverseKGrouop(node* head,int k)
{
    node *head;
   node *s = head,*e = head;
 // node *s = head,*e = head->next;
 if(head == NULL || head->next==NULL || k=1)
{
 return head;
}
  int i = k-1;
  while(i--)
  {
      e = e->next;
      if(e==NULL)
      return head;  
  }  
  node *newHead = ReverseKGrouop(e->next,k);
  Reverse(s,e);
  s->next = newHead;   
  return e;   
}

void Display(node *head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" "<<"->";
      temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
InsertAtTail(head,1);
InsertAtTail(head,2);
InsertAtTail(head,3);
InsertAtTail(head,4);
Display(head);

node *newHead = ReverseKGrouop(head);
Display(newHead);
  return 0;
}