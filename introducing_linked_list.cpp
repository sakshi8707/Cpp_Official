#include<bits/stdc++.h>
using namespace std;
 
class node 
{
    public:
    int val;
    node* next;
    // function for printing the
};
    void printnode(node* n) 
    {
        while(n!=NULL)
        {
            cout<<n->val<<" ";
            n = n->next;
        }
    }

int main()
{
    node* head = NULL;
    node* second = NULL;// creating a node in heap
    node* third = NULL;
    head = new node();
    second = new node();
    third = new node();
    head->val =1;
    head->next = second;
    second->val = 2;
    second->next = third;
    third->val = 3;
    third->next = NULL;
printnode(head);
    return 0;
}