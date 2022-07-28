#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n)
{
   // int counter = 1;
    // int temp ;
  if(n==1)
  {
      return;
  }
    for(int i = 0; i < n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
       BubbleSort(arr,n-1);
    }






    

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n;i++)
    {
        cin>>arr[i];  
    }
    BubbleSort(arr,n);
    for(int i=0; i < n; i++)
    {
        cout<<arr[i]<<" "; 
    }
    return 0;
}