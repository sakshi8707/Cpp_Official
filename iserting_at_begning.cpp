#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
int data;
node* next;
node(int d);
data = d;
next = NULL;

};
// fun for inserting
void Insert(node*&head,int data)
{
   node*n = new node(data);
   n->next = head;
   head = n;
}
// fun for printing
void Print(node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
        }
}
int main() {
    node* head = NULL;
    Insert(head,4);
    Insert(head,3);
    Insert(head,2);
    Insert(head,1);
    Print(head);

    return 0;
}