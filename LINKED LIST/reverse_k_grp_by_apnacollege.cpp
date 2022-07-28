#include<bits/stdc++.h>
using namespace std;
class node {
    public:
  int data ;
  node* next;
  // constructor calling function
  node(int val) 
  {
    data = val;
    next = NULL;
  }  
};
// function for inserting element at last of the node 
void InsertAtTail(node* &head ,int  val)
{
    node* n = new node( val);
    if(head == NULL)
    {
        head = n; 
        return ;      
    }
    node* temp = head;
    while(temp->next!= NULL)
    {
temp = temp->next;
    }
    temp->next = n;

}

// function for displaying the output
 void display(node* head)
    {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->"<<" ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

// function for reversing the linked list 
node *Reverse(node* &head)
{
    node *p = NULL,*c=head,*l ;
      while(c != NULL) {
          l=c->next;
        c->next = p;
        p=c;   
        c=l; 
        // while(l!=NULL) {
        //     l = l->next;
        // }
    }
    return p;
}
// recursive method to reverse linked list 
node *ReverseRecursion(node* &head)
{
    if( (head==NULL) || head->next==NULL)
    return head;
    node* newHead = ReverseRecursion(head->next);
    head->next->next = head;
    head->next = NULL ;
    return newHead;
}





int main()
{
node* head = NULL;
InsertAtTail(head,1);
InsertAtTail(head,2);
InsertAtTail(head,3);
InsertAtTail(head,4);
display(head);
node* newhead = Reverse(head);
//Reverse(head); 
display(newhead);
cout<<"using recursion : "<<endl;
node* newHead = ReverseRecursion(head);
display(newHead);
// k=2;
// node* newhead = reverse
// reverseK(newhead,k);
return 0;
}