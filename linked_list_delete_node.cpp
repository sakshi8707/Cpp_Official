#include<bits/stdc++.h>
using namespace std;
void DeleteNode( *node)
{
    if(node->next == NULL)
    {
        delete node;
    }
    // node->val = which we have to delete , node->next->val = bajuwala
    swap(node->val ,node->next->val);
    listNode* temp2 = node->next;
    node->next = temp2->next;
    delete temp2; // id didn't delete code also run but this cause memory leakage
return;
}
int main()
{
DeleteNode(head); // delete
    return 0;
}