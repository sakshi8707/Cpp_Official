#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;    
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        string x;
        int n;
        cin>>n;
        if(n==1)
        cin>>x;
        cin>>y;
        m[x]=+ y;
        // for second condition
        else if(n==2)
        cin>>x;
        m.erase(x);
        // for third condition
        else if(n==3)
        cin>>x;
        int y;
        cin>>y;
        m<string,int> :: iterator it = m.find(x);
        if(it!=m.end())
        cout<<m[x]<<endl;
        else
        cout<<0<<endl;

        
    }
    return 0;
    }
