#include<bits/stdc++.h>
using namespace std;

class node 
{
    public:
    int data;
    node* next;

    node(int val) 
    {
        data= val ;
        next = NULL;   
    }
};
    // function for inserting element at last of node 
    void InsertAtLast(node* &head,int val)
    {
        node* n = new node(val);
        if(head == NULL) 
        {
            head =n;
            return ;
        }
       node* temp = head; 
       while(temp->next!=NULL)
       {
           temp = temp->next;       
       }
       temp->next = n;
    }

       void Display(node* head )
    {
        node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
    }
    


int main()
{
    node* head = NULL;
// inserting at last of the node(create a function )
 InsertAtLast(head,3);
 InsertAtLast(head,4);
 InsertAtLast(head,5);
 Display(head);
    return 0;
}