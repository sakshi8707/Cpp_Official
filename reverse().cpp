#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n ;
    cin>>n;    
vector<int> v(n);
int x=0; 
 
for(int i = 0; i <n; ++i)
{    int x;   
    cin>>x;
    v.push_back(x);
}
cout<<"before arranging->"<<endl;
for(int i = 0; i < n; ++i)
{
    cout<<v[i]<<" ";
}
//reverse(v.begin(),v.end());
cout<<"after arranging->"<<endl;
for(int i = 0; i < v.size(); ++i)
{
    cout<<v[i]<<" ";
}
    return 0;
