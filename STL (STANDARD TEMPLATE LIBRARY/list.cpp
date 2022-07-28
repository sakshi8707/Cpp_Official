#include<bits/stdc++.h>
using namespace std;

int main()
{
// declaring list
list<int> l;
int data;
int n ;
cin >> n;
cout<<"enter the no. "<<endl;
// taking input from
for(int i=0; i<n;i++)
{
    cin>>data;
    l.push_back(data);
}
cout<<endl;
cout<<"numbers are "<<endl;
list<int> :: iterator it=l.begin();
for(auto p:l)
cout<<p<<" "; 
    
    return 0;
}