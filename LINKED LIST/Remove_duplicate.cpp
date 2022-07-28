#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data; //
    node* next; //
    node(int val) 
    {
        data = val;
        next = NULL;
    }
};

node *DeleteDuplicate(node *head)
{
    if(head == NULL || head->next == NULL)
    return head;
    node *newHead = DeleteDuplicate(head->next);
    if(head == newHead)
    {
        return newHead;
    }
    else
    {
        head->next = newHead;
        return head;
    }
}
    void *InsertAtTail(node* &head , int val)
    {
        node * n = new node(val);
        if(head == NULL)
        return head;
        node *temp = head;
        while(temp->next != NULL)
        {
           temp = temp->next;
        }
        temp->next = n;
        
    }

    void display(node *head)
    {
        node *temp = head;
        while(temp != NULL)
        {
            cout << temp->data <<"->"<<" ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }


int main()
{
    node * head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,5);
    InsertAtTail(head,8);
    InsertAtTail(head,2);
    cout<<"inseted list is :"<<endl;
    display(head);
    node *newHead = DeleteDuplicate(head);
    display(newHead);
}