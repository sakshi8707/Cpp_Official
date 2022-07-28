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