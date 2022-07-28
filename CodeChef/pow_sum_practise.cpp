#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
{
    int n;
    cin>>n;
    int sum = 0,d,j=1;
    int arr[n],brr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        brr[i] = arr[i];
        sum = sum + arr[i];
    }
    sort(arr,arr+n);
    d = ceil(log2(sum));
    cout<<d<<endl;
    auto c = find(brr,brr+n , arr[0]);
    j = ((pow(2,d))-sum)+arr[0]/arr[0];
    if((sum & sum+1)==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<1<<endl;
        cout<<1<<" "<<j;
        cout<<endl;
        cout<<(distance(brr,c) + 1)<<endl;;
    }
}
  return 0;
}