#include<bits/stdc++.h>
using namespace std;
void  Decimal_To_Binary(int n)
{
    int arr[10];
    int count=0;
    int i=0;
    while(n>0)
    {
        arr[i] = n%2;
        n = n/2;
        i++;
        //count++;
    }
    for(int j=count-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
int main()
{
int n;
cin>>n;
Decimal_To_Binary(n);

  return 0;
}