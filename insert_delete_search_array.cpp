#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];int position,key;
cin>>position>>key;
for(int i = 0; i <n;i++)
{
  cin>>arr[i];
}
if(n<position)
{
  cout<<"Invalid positono"<<endl;   
}
else
{

for(int i = n-1;i>=position-1;i--)
// main logic is here
arr[i+1] = arr[i];
arr[position-1] = key;
cout<<"array after insertion is ->"<<endl;

for(int  i = 0; i < n; i++)

  // printing array element and
  cout<<arr[i]<<" ";  

}

  return 0;
}

  /*// insertion in array
  int InsertArray(int arr[],int n,int key,int pos)
  {
    if(n<pos) return n;

    arr[pos] = key;
    return n+1;      

  }
  
int main()
{
    int arr[];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "; 
    }
    InsertArray(arr,5,25,4);
    return 0;
}*/
