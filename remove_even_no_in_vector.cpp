#include<bits/stdc++.h>
using namespace std;

int main()
{
// REMOVING EVEN NO FROM GIVEN SET OF VECTOR
vector<int> v;
/*v.push_back(5);
v.push_back(8);
v.push_back(11);
v.push_back(*/
//cout<<"size of vector: "<<v.size();
for(int i=1;i<5;i++)

//cout<<"size of vector: "<<v.size();
{int input;
cin>>input;
v.push_back(input);
}
vector<int> :: iterator it = v.begin();
for(auto it=v.begin(); it!=v.end();it++)
{
    if((*it)%2!=0)
    {
        cout<<*it<<" ";
    }
   
}
  return 0;   
}