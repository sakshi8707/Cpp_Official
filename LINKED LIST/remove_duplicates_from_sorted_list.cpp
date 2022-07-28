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

void insertAtTail(node* &head,int val)
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
    while(temp != NULL)
    { 
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* RemoveDuplicate(node* head)
{
if(head == NULL || head->next == NULL)
    return head;
      node*  temp = RemoveDuplicate(head->next);
       
            if(temp->data == head->data)
            {
                return temp;
            }
               
            else
            {
            head->next=temp;
                return head;
            }
        return temp;    
}

int main()
{
 node* head = NULL;
 int n;cin>>n;
 int arr[n];
 for(int i = 0; i<n;i++)
 {
     cin>>arr[i];
 }
 for(int i = 0; i <n;i++)
 {
     insertAtTail(head,arr[i]);
 }
  display(head);
 node* newHead = RemoveDuplicate(head);
 display(newHead);
 

  return 0;
}