#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
  int val;
  node* next;    
}
//function for inset element at first of node
// void atfirst( node *n)
// {
//     n = new node();
//     head->prev = n;

// }
// function for printin linked list element
void print(node * head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" "<<"->";
        head = head->next;
    }
}

int main()
{
//atfirst(new node());
print(head);
    return 0;
} // namespace std;
