// properly run
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
        next=NULL;
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
// merge fun for merging the list's
node* Merge(node *head1,node *head2)
{
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
    if(head1->data < head2->data)
    {
        head1->next = Merge(head1->next , head2);
        return head1;
    }
    else
    {
        head2->next = Merge(head1 ,head2->next);
        return head2;
    }
}
//merge2sorted list function
node* Merge2Sorted(node *head1,node *head2)
{
    return Merge(head1,head2);
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->"<<"";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}



int main()
{
    node* head1 = NULL;
    node* head2 = NULL;
int n1;
cin>>n1;
int arr1[n1];
for(int i = 0; i < n1; i++)
{
    cin>>arr1[i];  
    // InsertAtTail(head1,arr1[i]);
}
int n2;
cin>>n2;
int arr2[n2];
for(int i = 0; i < n2; i++)
{
    cin>>arr2[i];  
}
for(int i = 0; i < n1; i++)
{
    //cin>>arr1[i];
    InsertAtTail(head1,arr1[i]);
}
for(int i = 0;i<n2; i++)
{
    InsertAtTail(head2,arr2[i]);
}
// calling display functions
display(head1);
display(head2);
node* newhead = Merge2Sorted(head1,head2);
display(newhead);

  return 0;
}