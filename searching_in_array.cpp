#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++)
{
    cin>>arr[i];
}
int s=0,e=n;
while(s<=e)
{
    int key;
    int med = s+e/2;
    if(arr[med]==key)
    {
      cout<<med<<endl;
    }
    else if(arr[med]>key)
    {
        e = med-1
    }
    else
    {
        s = med+1;
    }

}
    return 0;
}
// time complexity = O(log n rash 2)