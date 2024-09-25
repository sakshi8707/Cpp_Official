#include<iostream>
#include<bits/stdc++.h>
using namespace std;



// **Better approch**
class Solution {
public:
   
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       
        unordered_set<int> toDelete(nums.begin(), nums.end());

       
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr) {
            if (toDelete.count(curr->val)) {
                
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};



  // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    
    ListNode* deleteNode(ListNode* head , int val)
    {
        return head->next;
    }
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        ListNode* temp = head;
        int n = nums.size();
        
        while(!temp)
        {
            
            for(int i=0;i<n;i++)
            {
                if(temp->val == nums[i])
                {
                    ListNode* newHead = deleteNode(temp , nums[i]);
                }
                //now making the connection of newHead to temp->next;
                NextNode = temp->next->next;
                newHead->next = NextNode;
                temp->next = newHead->next;
            }
        }
        return temp;
    }
};




int main()
{

  return 0;
}