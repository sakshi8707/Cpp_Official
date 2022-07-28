#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
int temp;
int counter = 1;
for(int i=0; i<n; i++)
{
cin>>arr[i];
}
while(counter<n)
{
for(int i=0; i<n; i++)
{
if(arr[i]>arr[i+1])
{
 temp = arr[i+1];
arr[i+1] = arr[i];
arr[i] = temp;
}
}
counter++;
}
 for(int i=0; i<n ; i++)
 {
    cout<<arr[i]<<" ";
 }

    return 0;    
}