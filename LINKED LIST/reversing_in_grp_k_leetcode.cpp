#include<bits/stdc++.h>
using namespace std;
class node
{
    int data;
    node* next;
//    node(int val)
//    {
//        data = val;
//        next = NULL;
//    }
}
void Reverse(node*s,node*e)
{
    node *p=NULL,*c=head,*n=head->next;
    while(p!=e)
    {
        c->next = p;
        p=c;   
        c=n;
        while(n!=NULL)
        {
            n->next =n;
        }
    }
}
node *ReverseKGroup(node *head,k)
{
    if(head==NULL || head->next==NULL || k=1)
    return head;    
    node *s=head , *e = head;   
    int i =k-1;
    while(i--)
    {
   e=e->next;
   if(e==NULL)
   return head;
    }
 node* nextHead = ReverseKGroup(e->next , k);
   reverse(s,e);
   s->next = nextHead;
return e;
}

 void print(node* head)
    {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->"<<" ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

int main()
{
  node *head = NULL
  print(head);
  k=2;
  node* newhead = ReverseKGroup(head,k);
  print(newhead);

    return 0; 
}