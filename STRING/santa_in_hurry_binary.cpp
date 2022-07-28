#include<bits/stdc++.h>
using namespace std;
//function for checking sack
// /{
// for(int i=0;i<n;i++)
// {
//     cin>>arr[i];
//     n = arr[i];
//     int curr;
//     int j=0;
//     while(n>0)
//     {
//         curr = n%2;
//         n = n/2;
//         //j++;
    
//      if(curr==n%2)
//         {
//             cout<<"Sack A"<<endl;
//         }
//         else
//         {
//             cout<<"Sack B"<<endl;
//         }
//     }
//     cout<<endl;
// }

int main()
{
int t ;
cin>>t;
while(t--)
{
    int n ;
    cin>>n;
    int arr[n];
    // for(int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    for(int i=0;i<n;i++)
{
    cin>>arr[i];
    n = arr[i];
    int curr;
    int j=0;
    while(n>0)
    {
        curr = n%2;
        n = n/2;
        //j++;
    
     if(curr==n%2)
        {
            cout<<"Sack A"<<endl;
        }
        else
        {
            cout<<"Sack B"<<endl;
        }
    }
    cout<<endl;
}
}

  return 0;
}