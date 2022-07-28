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

void Insert(node* &head,int val)
{
    node* n = new node(val);
if(head==NULL)
{
    head = n;        
    return;
}
node* temp  = head;
while(temp->next != NULL)
{
    temp = temp->next;
}
temp->next = n;
}

void display(node* head)
{
    
node* temp  = head;
while(temp != NULL)
{
    cout<<temp->data <<"->"<<" ";
    temp = temp->next;
}
cout<<"NULL"<<endl;
}
node* merge(node* l1,node* l2)
{
    node* curr = new node(0);
    node *temp = curr;
    while(l1 && l2)
    {
        if(l1->data < l2->data)
        {
            curr->next = l1;
            l1 = l1->next;
        }
        else
        {
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }
    if(l1) curr->next=l1;
    if(l2) curr->next=l2;
    return temp->next;
}
node* sortList(node* head)
{
    if(!head || !head->next)
    {
        return head;
    }
    node* s = head,*f = head->next;
    while(f && f->next)
    {
        s= s->next;
        f= f->next->next;
    }
    f = s->next;
    s->next = NULL;
    return merge(head,f);
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
for(int i = 0; i < n; i++)
{
Insert(head,arr[i]);
}
cout<<"before sorting"<<endl;
display(head);
node* newHead = sortList(head);
cout<<"after sorting"<<endl;
display(newHead);

  return 0;
}