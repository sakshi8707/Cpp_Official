#include<bits/stdc++.h>
using namespace std;
//function for even
bool CheckEven(int arr[],int n)
{
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            flag = true;
            break;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
if(CheckEven(arr,n))
cout<<"yes";
else
cout<<"NO"<<endl;
    return 0;
}