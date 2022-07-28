#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v) 
{
 
    cout<<v.size()<<" "<<endl;
    for(int i = 0;i<v.size();i++)
{
    cout<<v[i]<<" "<<endl;
}
}

int main() 
{
 vector<int> v; //
 // v.push_back(4);
 //cout<<"enter number"<<endl;
 for(int i=1;i<v.size();i++)
 {
     //int x;
     //cin>>x;
     v.push_back(i);
 }
// print(v);
 vector<int> :: iterator it = v.begin();
 
 for( auto it = v.begin(); it != v.end(); ++it )
 {
     cout<<(*it)<<" ";
 }
 

    return 0;
}