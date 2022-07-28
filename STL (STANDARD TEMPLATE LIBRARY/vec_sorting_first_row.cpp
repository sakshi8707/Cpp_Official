#include<bits/stdc++.h>
using namespace std;

bool sizecom(const vector<int>& v1,const vector<int>& v2)
{
    return (v1.size()>v2.size());
}

int main()
{
    vector<vector<int> > v = {{2,3,5},{54,5,6,6},{1,4}};
    cout<<"BEFORE SORTING: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<"AFTER SORTING: "<<endl;
        sort(v.begin(),v.end(),sizecom);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
  