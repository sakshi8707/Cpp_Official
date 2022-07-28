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

void InsertAtTail(ListNode* &head ,int  val)
{

ListNode* n = new ListNode(val);
if(head == NULL)
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
/*
 bool isPalindrome(ListNode* head) {
     ListNode* temp = head;
        ListNode* afterm;
        int count = 0;
        while(temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        int p = count/2;
        while(p--)
        {
            temp = temp->next;
        }
        afterm = temp->next;
        ListNode* temp2 = afterm;
        temp = head;
        while(temp2->next != NULL)
        {
            if(temp != temp2)
            {
              return false;
            }temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
        
    }*/
    ListNode* Reverse(ListNode* head)
    {
        ListNode* p = head,*c = head , *n = head->next;
        while(c != NULL)
        {
            c->next = p;
            p = c;
            c = n;
            if(n->next != NULL)
            {
                n= n->next;
            }
        } return p;

    }
    
    bool ispalindrome(ListNode* head)
    {
       ListNode* s = head, *f = head;
       while(f->next != NULL && f->next->next != NULL)
       {
          s = s->next;
          f = f->next->next;
       }
       s->next = Reverse(s->next);
       ListNode* start = head, *mid = s->next;
       while( mid != NULL )
       {
           if(mid->data != start->data)
           {
               return false;
           }
           mid = mid->next;
           start = start->next;
       }
       return false;
    }

    void display(ListNode* head)
    {
        ListNode* temp = head;
        while(temp != NULL)
        {
            cout<<temp->data << "->"<<" ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

int main()
{
    ListNode* head = NULL;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        InsertAtTail(head,arr[i]);
    }
 display(head);
//  if(ispalindrome(head) == false)
//  {
//      cout<<"NO"<<endl;
//  }
//  else
//  {
//         cout<<"yes"<<endl;
//  }


  return 0;
}