#include<bits/stdc++.h>
using namespace std;
// function for 
 void NextGreElement(int arr[],int n)
 {
     stack<int> s;
     s.push(arr[0]);
     for(int i=1;i<n;i++)
    {
        if (s.empty()) {
            s.push(arr[i]);
            continue;
        }
        while(!s.empty() and s.top()<arr[i])
        {
            cout<<arr[i]<<" ";
            s.pop();
        }
            s.push(arr[i]);

    }
    while(!s.empty())
 {
     cout<<"-1"<<endl;
     s.top();
 }

 }


int main()
{
  stack<int> s; //
 int n; // number
 cin>>n;
 int arr[n]; // array
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
NextGreElement(arr,n);
    return 0;
}