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
  // function for insertat tail node
    
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
node* Reverse(node* &head)
{
    node* p = NULL ,*c = head,*n = head->next;
    while(c != NULL)
    {
        c->next = p;
        p = c; //
        c = n;
        if(n != NULL)
        {
            n  = n->next;
        }
    }
    return p;
}
bool Palindrome(node* head )
{
    node* slow = head,*fast = head;
    while(fast->next != NULL && fast->next->next != slow)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = Reverse(slow->next);
    node* start = head,*mid = slow->next;
    while(mid != NULL && start != NULL)
    {
        if(mid != start)
        {
            return false;
            break;
        }
        mid = mid->next;
        start = start->next;
    }
    return true;
}

//display function
    void display(node* head)
    {
      node* temp = head;
      while(temp != NULL)
      {
          cout<<temp->data<<"->"<<" ";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
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
// int p;
//cin>>p;
// for userinput taking in fun InsertAtTail
for(int i = 0; i < n; i++)
{
    InsertAtTail(head,arr[i]);
}
cout<<"inserted elements are:"<<endl;
display(head);
if(Palindrome(head)==true)
{
    cout<<"yes"<<endl;
}
else
{
    cout<<"no"<<endl;
}
 return 0;
}