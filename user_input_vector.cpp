#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> v;
   cout<<"enter the no."<<endl;
   int input=0;
   for(int i=0;i<5;i++)
   {
       int input;
       cin>>input;
       v.push_back(input);
   } 
   for(int i=0;i<5;i++)
   {
       cout<<v[i]<<" "<<endl;
   }
return 0;
}