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
  // function for insertat tail node
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* s= head,*f = head;
        while(f!=NULL&&f->next!=NULL)
        {
            s= s->next;
            f= f->next->next;
            if(f==s)
            {
                return true;
            }
        }
        return false;
    }
};
    

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
// int p;
//cin>>p;
// for userinput taking in fun InsertAtTail
for(int i = 0; i < n; i++)
{
    InsertAtTail(head,arr[i]);
}
//MakeCycle(head,p);
//display(head);
cout<<CheckCycle(head)<<endl;
  return 0;
}
