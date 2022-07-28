#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
void getDecimalsValue(ListNode* head)
{
 // WE CONVERT THE BINARY NOBER INTO DECIMAL NO LIKE 
 // INPUT :: 1  1  0
 // OUTPUT :: 6 (BCZ 110's decimal no is 6 )
 ListNode* temp = head;
 int ans = 0;
 while(temp != NULL)
 {
     ans*=2;
     ans+= temp->val;
     temp = temp->next;
 }
 return ans;
}
};
int main()
{
    solution s;  
    s.getDecimalsValue(1 1 0);
    return 0;
}