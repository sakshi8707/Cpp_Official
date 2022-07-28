#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
//int N = 3 ;
int arr[13][13];
for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 3; j++)
    {
        cin>>arr[i][j];
    }
}
//-------------------printing output--------------------------------
// for(int i = 0; i < N; i++)
// {
//     for(int j = 0; j < N; j++)
//     {
// if(i != j)
// {
//     swap(arr[i][j],arr[j][i]);
// }
//    }
// }
int SumLowertraingular = arr[1][0] + arr[2][0] + arr[2][1];
int SumUppertraingular = arr[1][2] + arr[0][2] + arr[0][1];

if(arr[2][2] == n && arr[1][1] == n && arr[0][0] == n)
{
    cout<<"0"<<endl;
}
else
{
    cout<<max(SumLowertraingular,SumUppertraingular)<<endl;
}


  return 0;
}