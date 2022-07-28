#include<bits/stdc++.h>
using namespace std;

// merge  fun
void Merge(int arr[],int l ,int mid,int n)
{
    int n1 = mid-l;
    int n2 = n-mid+1;
    int a[n1],b[n2];

    for(int i = 0; i < n1;i++)
    {
        cin>>a[i];
    }
    for(int j = 0; j < n2;j++)
    {
        cin>>b[j];
    }
    int i=0;
    int j=0, k=n;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            k++;i++;
        }
        
        if(a[i]>b[j])
        {
            arr[k] = b[j];
            k++;j++;
        }
    }
    while(i<n1)
    {
        arr[k] = a[i];
        k++;i++;
    }

}
//mergesort function
void MergeSort(int arr[],int l,int n)
{
    int mid = l+n/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,n);
    Merge(arr,l,mid,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // fun calling
    MergeSort(arr,0,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; //
}