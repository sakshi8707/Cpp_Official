#include<bits/stdc++.h>
using namespace std;

// leetcode solution which i submittedd
// method : iterative method 
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

node *deleteduplicate(node *head) 
{
   if(head==NULL || head->next == NULL)
   return head;
   //node* temp = head;
   node* newHead = deleteduplicate(head->next);
 // delete duplicates  if(head->data==newHead->data)
   {
      return newHead;
   }
   else
   {
       head->next = newHead;
      return head;
   }        
}

void display(node* head)
{
node* temp = head;
while(temp != NULL)
{
   cout<<temp->data << "->"<<" ";
  temp= temp->next; 
}
cout<<"NULL"<<endl;
}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }
   node* head = NULL;
   for(int i=0; i<n;i++)
   {
      InsertAtTail(head,arr[i]);
   }
   display(head);
   //node* head = NULL;
   node* newhead = deleteduplicate(head);
    display(newhead);  
}