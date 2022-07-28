#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q=0;
    cin>>q;
    for(int i=0;i<q;i++) 
    {
        int x=0,y=0;
        cin>>y>>x;
       if(y==1)
       {
           s.insert(x);
       }
       else if(y==2)
       {
        //set<int> :: iterator it=s.find(x);
           s.erase(x);
       }
       else 
       {
           set<int> :: iterator it=s.find(x);
           if(it==s.end())
           {
          cout<<"NO"<<endl;
           }
           else
           cout<<"YES"<<endl;
       }
    }
    return 0;
}