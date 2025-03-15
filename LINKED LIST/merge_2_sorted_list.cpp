//TIME COMPLEXITY--->
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


//**more better aprroch in java**
 // this.data = data1;

// TIME COMPLEXITY----->O(N)
// SPACE COMPLEXITY------>O(1) space
/*
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1==NULL) 
      return l2;
        
      if(l2==NULL)
      return l1;
        
      // swaping for initially so that first node is samaller
      if(l1->val > l2->val)
      {
          swap(l1, l2);
      } 
       ListNode *   result = l1;     
      while(l1!=NULL && l2!=NULL) 
      {
        ListNode * temp = NULL;
        while(l1!=NULL && l1->val <= l2->val) 
        {
           temp = l1;
            l1 = l1->next ;
        }
        // inseting l1 which is last node into temp 
        temp->next = l2;
        // swaping when l1 is greater than l2
       swap(l1,l2);
      }
    return result;
    }
    
};*/

//TIME COMPLEXITY----->O(N)
//SPACE COMPLEXITY------O(1) space
//------------------->RECURSIVE METHOD<-----------------------------------
/*
ListNode* merge(ListNode* l1, ListNode* l2)
{
      if(l1==NULL) return l2;
        if(l2==NULL) return l1;

        if(l1->val <l2->val)
        {
            l1->next = merge(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = merge(l2->next, l1);
            return l2;
        }
}
ListNode* mergeKLists(ListNode* l1, ListNode* l2) {
      return merge(l1,l2);
    }
    */
