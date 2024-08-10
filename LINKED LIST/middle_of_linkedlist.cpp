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
void InsertAtTail(node* &head ,int val)
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
node *MiddleOfLinkedList(node* head)
{
    node *slow =head,*fast = head;
    
        while(fast!= NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;

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
    //sample test case
InsertAtTail(head,1);
InsertAtTail(head,2);
InsertAtTail(head,3);
InsertAtTail(head,4);
display(head);
node *newHead = MiddleOfLinkedList(head);
display(newHead);


return 0;
}
