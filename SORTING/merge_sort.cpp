#include<bits/stdc++.h>
using namespace std;
// merge sort program
// merge function for merging array elements
void Merge(int arr[],int l,int mid,int r)
{
    int n1 = mid-l+1; 
    int n2 = r-mid; 
     // creating temp array of length n1 and n2
    int a[n1],b[n2]; 
    // taking input for
    for(int i=0;i<n1;i++)
    {
        a[i] = arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j] = arr[mid+1+j];
    }
    // creating pointers 
    int i=0,j=0,k=l;
    // checking for order of element
    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    //for last element when last element we have to insert
    while(n1>i)
    {
        arr[k] = a[i];
        k++;i++;
    }
    while(n2>_JBLEN)
    {
        arr[k] = b[j];
        k++;j++;
    }

}

// Mergesort function for sorting purpose
 void MergeSort(int arr[],int l,int r)
 {
     int mid = (l+r)/2;
     if(l<r)
     {
         MergeSort( arr,l, mid);
         MergeSort( arr, mid+1, r);
         Merge(arr,l,mid,r);
     }
 }
 
int main()
{
    int r;
    cin>>r;
    int arr[r];
    for(int i=0;i<r;i++)
    {
        cin>>arr[i];
    }

 MergeSort(arr,0,r);
// 
 
     for(int i=0;i<r;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}