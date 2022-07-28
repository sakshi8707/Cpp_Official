#include<bits/stdc++.h>
using namespace std;

int main()
{
map<int,string> map;
map.insert({4,"sakshi"});
map.insert({2,"tiwari"});
map.insert({9,"jaypraksh"});
map.erase(4);
for(auto m:map)
{
    cout<<m.first<<" "<<m.second<<" "<<endl;
}
return 0;
}