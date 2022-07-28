#include<bits/stdc++.h>
using namespace std;
// fuction
int power(int n,int p)
{
if(p==0)
{
    return 1;
}
int prepower = n*power(n,p-1);
return prepower;
}

int main()
{
    int n,p;
    cin>>n>>p;
cout<<power(n,p);
    return 0;
} // namespace std;
