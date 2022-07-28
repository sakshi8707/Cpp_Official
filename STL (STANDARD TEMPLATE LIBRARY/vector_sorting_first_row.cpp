#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v;
    for(int i=0;i<v.size();i++)  // TAKING INPUT
    {
     int n;
    cin>>n;
    vector<int> temp;
    for(int j=0;j<v.size();j++)
    {
    int x;
    cin>>x;
    temp.push_back(x);
    }
    v.push_back(temp);
    }
    cout<<"before sorting"<<endl;
    for(int i=0;i<v.size();i++)      // PRINTING 2D VECTOR
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
    }
    cout<<"\n after sorting \n"<<endl;

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
          }
    }
    return 0;
}