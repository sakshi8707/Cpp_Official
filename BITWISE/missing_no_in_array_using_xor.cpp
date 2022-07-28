// Find Missing no in an array using xor.
#include<bits/stdc++.h>
using namespace std;

void Normal_method(int arr[],int n)
{
    int xor_no=0;
int p = n*(n+1)/2; //sum of total no upto n
// for finding sum of array elements in array
for(int i = 0; i <n;i++)
{
    xor_no = xor_no + arr[i];
}
p = xor_no-p;    //
cout<<p+1<<endl;
}

void XOR_method(int arr[],int n)
{
    int xor_no=0;
    for(int i = 0; i < n; i++)
    {
        
    }
}

int main()
{
int n; //
cin>>n; //
int arr[n]; //
for(int i = 0; i < n; i++)
{
    cin>>arr[i];                 
}
Find_Missing_no(arr,n);          

  return 0;
}