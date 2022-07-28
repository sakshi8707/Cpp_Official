#include<bits/stdc++.h>
using namespace std;

int main()
{
   set<int> s1;
   s1.insert(20);
   s1.insert(60);
   s1.insert(50);
   s1.insert(10);
   s1.insert(30);
set<int> :: iterator it;
cout<<"set 1 :"<<endl;
for(auto it=s1.begin(); it!=s1.end(); ++it)
{
    cout<<*it<<endl;
}
set<int> s2(s1.begin(), s1.end());
cout<<"set 2:"<<endl;
for(auto it=s2.begin(); it!=s2.end(); ++it)
{
    cout<<*it<<endl;
}
// printing loop upto 30
cout<<"loop upto 30"<<endl;
s2.erase(s2.begin(),s2.find(30));
for(int k : s2)
{
    cout<<k<<" "<<endl;
}

    return 0;
}