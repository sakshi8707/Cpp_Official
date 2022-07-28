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
        next=NULL;
    }
};

void TakeInput(node* &head,int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {   
        temp = temp->next;
    }
    temp->next = n;
}

void Display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {  
        cout<<temp->data<<"->"<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
node* forcheck(node* head)
{
    node* temp = head;
    node* even = new node(0);
    while(temp != NULL)
    { 
        if(temp->data%2==0)
        {
           even = temp;
           even = even->next;
        }
        temp = temp->next;
    }
    return even;
}
//=============================> for mergingArray
node* merge(node* n1,node* n2)
{
    while(!n1->next)
    {
        n1 = n1->next;
    }
    n1->next = n2;
    return n1;
}

   node* oddEvenList(node* head) {
        if(head==NULL)
        {
            return head;
        }
        //node* head = head;
        node* oddnode,*evenode;
    //    node* oddnode = new node(0);
    //      node* evenode = new node(0);
        while(head->next!= NULL)
        {
          //   int c = head->data;
            if((head->next->data)%2 == 1)
            {
                oddnode->next = head->next;
               oddnode = oddnode->next;
            }
            else
            {
             evenode->next = head->next;
             evenode = evenode->next;
            }
            head = head->next;
        }
    return merge(oddnode,evenode);    
      
       // return evenode;
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

 for(int i = 0;i<n;i++)
 {
     TakeInput(head,arr[i]);
 }
 Display(head);
 cout<<"for checking even"<<endl;
node* ans = forcheck(head);
Display(ans);
 cout<<"odd even list"<<endl;
node* newHea = oddEvenList(head);
Display(newHea);
  return 0;
}