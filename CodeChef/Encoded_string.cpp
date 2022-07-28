#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<string> s;
int t;
cin>>t;
while(t--)
{
    int n; 
    cin>>n;
    //vector<char> char = {97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112};
    vector<char> ch = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
     int a = ch.size();
    vector<int> v;
    int s = v.size();
    for(int i=0; i<s; i++)
    {
        cin>>v[n];
    }
    // main operation ------------>
    int i=0;
     while(i<s || s--)
     {
    //    a = a/2;
    //    int b=a; 
    // if '0'
     if(v[i]=='0')
    {
    // checking between range of 0<-->b
    
    }
    // if '1'
    else if(v[i]=='1')
    {
    // checking between range of b<-->b*2


    }
     }



}

  return 0;
}