#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2 = r-mid;
    int a[n1];int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=arr[mid+1+j];
    }
   int i=0,j=0,k=l;
    while(n1>i and n2>j)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            k++;i++;
        }
        else
        arr[k] = b[j];
        k++;j++;
    }

    while(n1>i)
    {
       arr[k] = a[i];
       k++;i++;
    }
    while(n2>j)
    {
       arr[k] = b[j];
       k++;j++;
    }
 
}

void mergesort(int arr[],int l,int r)
{
int mid= (l+r)/2;
if(l<r)
{
mergesort(arr,l,mid+1);
mergesort(arr,mid,r);
merge(arr,l,mid,r);
return ;
}
}


int main()
{
    int r;
    cin>>r;
    int arr[r];     
    for(int i = 0; i < r; i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,r);
    for(int i = 0; i < r; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}