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

void InsertAtTail(node* &head ,int  val)
{
node* n = new node(val);
if(head == NULL)
{
    head = n;
    return ;
}
node* temp = head;
while(temp->next != NULL)
{
    temp = temp->next;

}
temp->next = n;
}


node *Reverse(node* head)
{
if(head==NULL)
return head;
node *p = NULL , *c = head,*n = head->next;
while(c!=NULL)
{
    c->next = p;
    p=c;
    c=n;
    while(n!=NULL)
    {
        n = n->next;
    }
}
return p;
}
node *deleteduplicate(node *head) 
{
   if(head==NULL || head->next == NULL)
   return head;
   //node* temp = head;
   node* newHead = deleteduplicate(head->next);
   if(head->data==newHead->data)
   {
      return newHead;
   }
   else
   {
       head->next = newHead;
      return head;
   }        
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
node* head = NULL;
 // node* head = 1,3,5;
 int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }

   for(int i = 0; i < n; i++)
   {
       InsertAtTail(head,arr[i]);          
   }
   
// node* Newhead = Reverse(head);
// print(Newhead);
 node* newhead = deleteduplicate(head);
    print(newhead);  

    return 0;
}