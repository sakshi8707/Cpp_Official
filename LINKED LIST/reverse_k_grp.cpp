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
// --------------**Brute approch** SC(O(n/k))-----------------------------------------------------



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


// --------------**BETTER approch** SC(O(1))-----------------------------------------------------

node *ReverseKGrouop(node* head,int k)
{
  if(head==NULL || head->next==NULL || k==1)
  {
      return head;
  }
  node* dummy = new node(-1);
    dummy->next = head;
    node* beforeStart = dummy; 
    node* e = head;
    int i=0;
    while(e!=NULL)
        {
            i++;
            if(i%k==0)   //i reached till k nodes ex. k=3 , i=3 it meaans 3/3=0 (now i have to perform reversal)
            {
                node* s=beforeStart->next;
                node* temp = e->next;
                reverse(s,e);   
                beforeStart->next = e;
                s->next = temp;      //now connecting reversed nodes head() with end's next (temp)
                beforeStart = s;
                e= temp;
            }
            else
            {
                e=e->next;  //i never reached till end 
            }
        }
    return dummy->next;
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
