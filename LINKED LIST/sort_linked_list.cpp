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
          next = NULL;
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
// make cycle in linked list function

// check cycle detection linked list



//display function
    void display(node* head)
    {
      node* temp = head;
      while(temp != NULL)
      {
          cout<<temp->data<<"->"<<" ";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
    }
  ListNode* Merge(ListNode* l1, ListNode* l2)
  {
    ListNode* curr = new ListNode(0);
    ListNode* temp = curr;
    while(l1 != NULL && l2 != NULL)
    {
      if(l1->data < l2->data)
      {
        curr->next = l1;
        l1 = l1->next;
      }
      else
      {
        curr->next = l2;
        l2 = l2->next;
      }
      curr = curr->next;
    }
    while(l1 != NULL)
    {
      curr->next = l1;
    }
    while(l2 != NULL)
    {
      curr->next = l2;
    }
    return temp->next;
  }
  ListNode *sortList(ListNode* head) {
      //  ListNode* temp = head;
        //node* temp2;
       ListNode* slow = head,*fast = head;
       while(fast != NULL && fast->next != NULL)
       {
         slow = slow->next;
         fast = fast->next->next;
       }
      ListNode* mid = slow->next;
      slow->next = NULL;
     return Merge(head,mid);

  }
         
  
  int main()
  {
      node* head = NULL;
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  
  for(int i = 0; i < n; i++)
  {
InsertAtTail(head, arr[i]);      
  }

  cout<<"before sorting"<<endl;
  display(head);
  node* newHead = sortList(head);
  cout<<"after sorting"<<endl;
  display(newHead);
    return 0;
  }
  