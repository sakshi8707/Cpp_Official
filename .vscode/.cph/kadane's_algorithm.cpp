#include<bits/stdc++.h>
using namespace std;

int  Kadane(int arr[],int n)
{
    int curr=0;
    int max_num = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]>0)
        {
            curr+=arr[i];    
            max_num = max(max_num,curr);
        }
    }
    return max_num;
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
cout<<Kadane(arr,n);
// printing
// for(int i=0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }

  return 0;
}