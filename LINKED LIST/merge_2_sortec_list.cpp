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
//middle of linkedlist
// node *MiddleOfLinkedList(node* head)
// {
//     node *slow =head,*fast = head;
    
//         while(fast!= NULL && fast->next!=NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;

    // node *temp = head;
    // int count=0;
    // while(temp->next!= NULL)
    // {
    //     count++;
    //     temp = temp->next;
    // }
    // int n = (count/2)+1;
    // while(n--)
    // {
    //     temp = temp->next;
    // }
    // return temp;


//merge 2 sorted list
node* merge(node*l1, node*l2)
{
    if(l1==NULL)
    return l2;
    if(l2==NULL)
    return l1;
   if(l1-data < l2-data)
    {
      l1->next = merge(l1->next, l2);
      return l1;      
    }
    else
    {
        l2->next = merge(l1,l2->next);
        return l2;
    }
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






int main()
{
node* head = NULL;
InsertAtTail(head,1);
InsertAtTail(head,2);
InsertAtTail(head,3);
InsertAtTail(head,4);
display(head);
// node *newHead = MiddleOfLinkedList(head);
// display(newHead);
node *newHead = merge(head,head);
display(newHead);

return 0;
}