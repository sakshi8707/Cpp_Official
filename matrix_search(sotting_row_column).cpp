#include<bits/stdc++.h>
using namespace std;
bool CheckTarget() 
{
    int  n, m,target;
    int arr[n][m];
    cin>>n>>m>>target;
    
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
           if(arr[i][j]==target)
                 {
         return true;
                 }
           else
         return false;
     
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    // searching with brute force aproach
    CheckTarget();
    return 0;
}