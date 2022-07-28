#include<bits/stdc++.h>
using namespace std;
//swap fun
void swap(int arr[],int left,int right)
{
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
}
//partition fun
int partition(int arr[],int left,int right)
{
int pi = arr[right];
int i=left-1;

for(int j=left;j<right;j++)
{
    if(arr[j]<pi)
    {
        i++;
        swap(arr,i,j);
    }
}

swap(arr,i+1,right);
return i+1;
}

// QuickSort function
vector<int> QuickSort(int arr[],int left,int right)
{
    if(left<right)
    {
int pi = partition(arr,left,right);
QuickSort(arr,left,pi-1);
QuickSort(arr,pi+1,right);
    }
}
//main method
int main()
{
int n;
cin>>n;
//vector<int> v(n);
int arr[n];
for(int i = 0; i <n;i++)
{
cin>>arr[i];
}
QuickSort(arr,0,n);
for(int j=0;j<n;j++)
{
    cout<<arr[j]<<" ";
}
  return 0;
}