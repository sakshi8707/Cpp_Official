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
  while(temp->next!=NULL)
  {
   temp = temp->next;
  }
  temp->next = n;
}

void display(node* head)
{
    node* temp = head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp = temp->next;

    }
    cout<<"NULL"<<endl;
}

void MakeCycle(node* head,int pos)
{
    node* temp = head;
    int  count = 0;
    node* startNode;     
    while(temp->next!=NULL)
    {
        if(count == pos) 
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
bool CheckCycle(node* head)
{
    node* s = head,*f = head;
    while(f!=NULL && f->next!=NULL)
    {
        s = s->next;
        f = f->next->next;
        if(f==s)
        {
            return true;
        }
    }
    return false;
}
void RemoveCycle(node* head)
{
node* s = head, *f  = head;        
while(f->next!=NULL && f!=NULL)
{
    s = s->next;
    f= f->next->next;
    if(f==s)
    {
        break;    
    }
}
 f= head;
while(f->next!=s->next)
{
    f = f->next;
    s = s->next;
}
s->next = NULL;
}
int main()
{
    node* head = NULL;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

for(int i=0;i<n;i++)
{
  InsertAtTail(head,arr[i]);
}
//display(head);
int p;
cin>>p;
MakeCycle(head,p);
cout<<"check cycle"<<endl;
cout<<CheckCycle(head)<<endl;
cout<<"Remove cycle"<<endl;
RemoveCycle(head);
display(head);

  return 0;
}