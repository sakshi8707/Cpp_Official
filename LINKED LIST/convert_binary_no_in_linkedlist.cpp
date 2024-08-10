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



class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans= 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            ans *= 2;
            ans += (temp->val);
            temp = temp->next;
        }
        return ans;
    }
};

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
