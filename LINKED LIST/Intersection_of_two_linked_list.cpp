#include<bits/stdc++.h>
using namespace std;
class ListNode
{
    public:
    int data;
    ListNode* next;
    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};
//insertattaill
void InsertAtTail(ListNode* &head ,int  val)
{
ListNode* n = new ListNode(val);
if( head == NULL )
{
head = n;
return ;
}
ListNode* temp = head;
 while(temp->next != NULL)
 {
     temp = temp->next; 
 }
 temp->next = n;
}
// getInsertAtTail
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //ListNode* tempA = headA;
        ListNode* tempB ;
        while(headA != NULL)
        {
            tempB = headB;
            while(tempB != NULL)
            {
                if(headA == tempB)
                {
                    return headA;
                }
                tempB = tempB->next;
            }
            headA = headA->next;
        }
        return NULL;
    }
    //BEST APPROCH (TWO POINTER APPROCH)-------------------------
      /*ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      //  ListNode* tempA = headA;
        ListNode* a = headA,*b = headB;
       while(a!=b)
       {
        if(a == NULL)
        {
            a = headB;
        }
           else
           {
           a = a->next;
           }
           
         if(b == NULL)
         {
             b = headA;
         }
           else
           {
               b = b->next;
           }
       }
        return a;
        
    }*/

    void display(ListNode* head)
    {
        ListNode* temp = head;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<" ";
        }
        temp = temp->next; 
    }

int main()
{
ListNode *headA = NULL;
// InsertAtTail(headA,1);
// InsertAtTail(headA,2);
// InsertAtTail(headA,3);
// InsertAtTail(headA,4);
int n;
cin>>n;
int arr[n];
for(int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for(int i = 0; i < n; i++)
{
 InsertAtTail(headA,arr[i]);
}
ListNode *headB = NULL;
int n1;
cin>>n1;
int arr1[n];
for(int i = 0; i < n1; i++)
{
    cin>>arr1[i];
}

for(int i = 0; i < n1; i++)
{           
 InsertAtTail(headA,arr1[i]);
}

// InsertAtTail(headB,8);
// InsertAtTail(headB,2);
// InsertAtTail(headB,3);
// InsertAtTail(headB,4);
// //ListNode* newHead = 
cout<<getIntersectionNode(headA,headB);
//display(newHead);
  return 0;
}