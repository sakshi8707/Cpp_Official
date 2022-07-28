#include<bits/stdc++.h>
using namespace std;

int main()
{
// printing a 2D vector
vector<vector<int > > v = {{5,4,3},{6,7,8},{6,33,64}};

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
