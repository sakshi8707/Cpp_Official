#include<bits/stdc++.h>
using namespace std;


// sorting a stack using temporary stack
void sortstack(stack<int> &input) // input stack  contains no.s
{
    int temp;
    stack<int> tempstack;  // on temps tack we put a sorted no.s
    while(!input.empty())
    {
        temp = input.top();
        input.pop();
        while(!tempstack.empty() && tempstack.top() > temp) // this is when no is big then we not insert in tempstack we insett 
        {                                  // 
            input.push(input.top());
            tempstack.pop();
        }
        tempstack.push(input.top());
    }
    
}



int main()
{
    // for taking user input                 
stack<int> input;
/* {
    for(int i = 0; i <input.size(); i++)
    {
        int x ;
        cin>>x;
        input.push(x);
    }
}*/
input.push(3);
input.push(5);
input.push(1);
input.push(4);
input.push(2);
input.push(8);
// calling function
stack<int> tempstack = sortStack(input);

// for printing output
  while(!input.empty())
    {
       cout<<input.top()<<" ";
       input.pop();
    }
    return 0;
}