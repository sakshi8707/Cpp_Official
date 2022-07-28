class Solution {
public:

node* merge(node*l1, node*l2)
{
    if(l1==NULL)
    return l2;
    if(l2==NULL)
    return l1;
   if(l1-val < l2-val)
    {
      l1->next = merge(l1->next, l2);
    }
    else
    {
        l2->next = merge(l1,l2->next);
    }
}



    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     // SOLUTION BY FARAZ------------>
     // BY RECURSION METHOD            
      return merge(l1,l2);

};



    
        // SOLUTION BY STRIVER--------------------->
      /* if(l1==NULL) 
      return l2;      
      if(l2==NULL)
      return l1;
      // swaping for initially so that first node is samaller
      if(l1->val>l2->val)
      {
          swap(l1, l2);
      } 
      Listnode *result = l1;     
      while(l1!=NULL && l2!=NULL) 
      {
        ListNode* temp = NULL;
        while(l1!=NULL && l1->val<l2->val) 
        {
           temp = l1;
            l1 = l1->next ;
        }
        // inseting l1 which is last node into temp 
        temp->next = l1; 
        // swaping when l1 is greater than l2
        temp = l1;
        l1 = l2;
        l2 = temp;
      }
    }
    return result;*/