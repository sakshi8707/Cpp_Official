

#include<bits/stdc++.h>
using namespace std;

// TC : O(n) + O(n-k)
// SC : O(1)

class node {
    public:
        int num;
        node* next;
        node(int a) {
            num = a;
            next = NULL;
        }
};


// approch : make list circular then break the connection after (len-k-1) iteration and return after that node
class Solution {
public:
    node* rotateRight(node* head,int k) {
         //base case
         if(head==NULL || head->next==NULL || k==0) return head;

         //step1 : making circular list and finding len
         int len = 1;
         node* temp  , *newHead = head;
         while (temp->next!=NULL)
         {
            len++;
            temp  = temp->next;
         }
         temp->next = head;
         k = k%len;
         int end = len-k;

         while(end--)
         {
            temp = temp->next;
         }
         head = temp->next;
         temp->next = NULL;
         return head;


    }
};

int main(){
    
    return 0;
}
