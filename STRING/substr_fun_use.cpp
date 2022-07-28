#include<bits/stdc++.h>
using namespace std;
void substr(string s,string ss)
{
     int S = s.length();
    int SS = ss.length();
    for(int i=0;i<S-SS+1;i++)
    {
    if(s.substr(i,SS)==ss)
    cout<<"found at index "<<i<<endl;
    // else 
    // cout<<"not found at index "<<endl;
     }
}
int main()
{
    string s ; 
    getline(cin, s) ;
    string ss;
    cin>>ss;
  substr(s,ss);

  return 0;
}