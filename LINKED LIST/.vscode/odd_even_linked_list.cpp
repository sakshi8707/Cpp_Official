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
    while(temp!= NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* oddEven(node* head)
{
    node* odd = head,*even = head->next,*temp = head->next;
    while(odd->next!=NULL and even->next!=NULL)
    {
        odd->next = even->next;
        even->next = odd->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = temp;
    return head;
}

int main()
{
node* head = NULL;
int n;
cin>>n; 
int arr[n]; 
for(int i = 0; i < n; i++)
 {
     cin>>arr[i];
 }

 for(int i = 0;i<n;i++)
 {
     InsertAtTail(head,arr[i]);
 }
 display(head);
node* ans = oddEven(head);
display(ans);

  return 0;
}