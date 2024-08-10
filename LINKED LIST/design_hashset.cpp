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

void InsertAtTail(node* &head ,int  val)
{
node* n = new node(val);
if(head == NULL)
{
    head = n;
    return ;
}
node* temp = head;
while(temp->next != NULL)
{
    temp = temp->next;

}
temp->next = n;
}


//DESIGN HASHSET-**BRUTE APPROCH**

class MyHashSet {
public:
    vector<int> mp;
    int size;
    MyHashSet() {
        size = 1e6+1;
        mp.resize(size);
    }
    
    void add(int key) {
        mp[key] = 1;
    }
    
    void remove(int key) {
        mp[key] = 0;
    }
    
    bool contains(int key) {
        return mp[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */


 void print(node* head)
    {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->"<<" ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

int main() 
{
node* head = NULL;
 // node* head = 1,3,5;
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
   
// node* Newhead = Reverse(head);
// print(Newhead);
 node* newhead = deleteduplicate(head);
    print(newhead);  

    return 0;
}
