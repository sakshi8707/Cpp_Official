
#include<bits/stdc++.h>
using namespace std;

class Stack 
{
  int size;
  int * arr;
  int top;
  public:
   Stack(){
    top=-1;
    size=1000;
    arr=new int[size];
   }
   void Push(int x){
    top++;
    arr[top] = x;
   }

   int Pop(){
    int x = arr[top];
     top--;
    return x;
   }
   
   int Top(){
   return arr[top];
   }

   int Size(){
     return top+1;
   }

   bool IsEmpty(){
       if(top==-1)
       {
        return true;
       }
       else
       {
        return false;
       }
   }
};

int main()
{

 Stack st;
 st.Push(5);
 st.Push(4);
 st.Push(3);
 st.Push(2);
 st.Push(1);
 cout<<" top element"<< st.Top() <<endl;
 cout<<" top element"<< st.Size() <<endl;
 cout<<"element before deletion(pop)"<< st.Pop() <<endl;
 cout<<" top element"<< st.Size() <<endl;
 cout<<" top element"<< st.Top()<<endl;
 cout<<" top element"<< st.IsEmpty() <<endl;


  return 0;
}