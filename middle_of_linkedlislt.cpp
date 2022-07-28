#include<bits/stdc++.h>
using namespace std;
// function too finding the middle of linked list
//time complexity is = O(n) 
void(listNode* head)   
{
    /*
    int n=0;
    listNode* temp = head;
    while(temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    int half = n/2;
    temp = head;
    while(half--)
    {
        temp = temp->next;
    }
    return temp;
    */
//O(1) TIME COMPLEXITY
listNode *fast = head,*slow = head;
while(fast != NULL && fast->next != NULL)
{
slow=slow->next;
 fast=fast->next->nest;
}
return slow;
}
