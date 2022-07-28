#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1],b[n2];

for(int i=0;i<n1;i++)
{
    a[i] = arr[l+i];
}
for(int j=0;j<n2;j++)
{
    b[j] = arr[mid+1+j];
}
int i =0,j = 0,k=l;
while(i<n1 && j<n2)
{
    if(a[i]<b[j])
    {
        arr[k] = a[i];
        i++;k++;
    }
    else
    {
        arr[k] = b[j];
        j++;k++;
    }
}
// for remaining element or last element is
while(i<n1)
{
    arr[k] = a[i];
    k++;i++;
}
while(j<n2)
{
    arr[k] = b[j];
    k++;j++;
}

}

void Mergesort(int arr[],int l,int r)
{
  int mid = (l+r)/2;
  if(l<r)
  {
      Mergesort(arr,l,mid);
      Mergesort(arr,mid+1,r);
      merge(arr,l,mid,r);
  }
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
    Mergesort(arr,0,n);
    for(int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    

  return 0;
}