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

 node* reverse(node* head,node* jth)
    {
        node* p = NULL,*c = head, *n = head->next;
            if(head!=NULL|| head->next!=NULL)
            {
                return head;
            }
        while(c!=jth)
        {
           c->next = p;
            p = c;
            if(n)
            {
                n = n->next;
            }
        }
        return p;
    }
    
    node* insertionSortList(node* head) {
    node* temp = head;
        while(temp)
        {
            node* curr = temp->next;
            node* jth = temp;
            node* jth_val = jth;
           // node* jth_val = reverse(head,jth);
            while(curr->data < jth_val->data && curr->next->data > jth->data)
            {
                jth_val->next = jth_val;
            //     while(jth_val)
            //      {
            //   jth_val= jth_val->next;
            jth->next = curr;
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
node* newHead = insertionSortList(head);
cout<<"after sorting"<<endl;
display(newHead);

  return 0;
}