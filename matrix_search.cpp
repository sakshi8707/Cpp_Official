#include<bits/stdc++.h>
using namespace std;
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
    int r=0,c=m-1;
    bool found = false;
    while(r<n and c>=0)
    {
        if(arr[r][c]==target)
        {
    found=true;
        }
    if(arr[r][c]>target)
    {
    c--;
    }
    else
        r++;
    }
    if(found)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
   
    return 0;
}