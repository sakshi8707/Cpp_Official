#include<bits/stdc++.h>
using namespace std;


class Node {
int data;
  Node* next;

};
// insert function
Node* insert(Node* head,int x) 
{
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if(head != NULL)
    temp->next = head;
    head = temp;
    return head;
}
//for printing
void print(Node* head)
{
    cout<<"list is ->"<<endl;
    // *Node head = head;
    while(!head==NULL);
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main() 
{
    *Node head = NULL;
cout<<"how many no you want to insert:"<<endl;
int n;
cin>>n;
for(int i=0; i<n; i++)
{
    cout<<"enter the no:"<<endl;
    int x;
    cin>>x;
   head = insert(head,x);
    print(head);  
}
    return 0;
}