#include<bits/stdc++.h>
using namespace std;
class node {
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

// node* LastNode(node* head)
// {
    
//         node* temp = head;
//         int count = 0;
//         while(temp!=NULL)
//         {
//             temp = temp->next;
//             count++;
//         }
//         node* s = head,*f = head;
       
//             while(s->next != NULL && s->next->next != NULL)
//             {
//                 s = s->next->next;
//                 if(f->next->next != NULL && f->next->next->next != NULL)
//                 {
//                     f = f->next->next->next;
//                 }
//             }
//             if(count%2 == 0)
//             {
//                 return s;
//             }
//             else
//             {
//                 return s;
//             }
    
// }
node* RotateList(node* &head,int k)
{
    if( head == NULL || head->next == NULL|| k == 0)
    {
        return head;
    }
    node* temp = head;
    int c = 1;
    node* lastnode;
    while(temp->next != NULL)
  {
        temp = temp->next;
        c++;
  }
  temp->next = head; 
  k = c - k%c;
  // node* curr = head;
  while(k-- )
  {
    temp = temp->next;  
  }
  head = temp->next;
  temp->next = NULL;
  
  return head;

    }


void display(node* head)
{
    node* temp = head;
    while(temp->next != NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
node* head = NULL;
int n ;
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
//node* newHead  = RotateList(head,0);
//cout<<<<endl;
// int k;
// cin>>k;
// display(head);
node* newhead = RotateList(head,2);
display(newhead);
  return 0;
}