#include <bits/stdc++.h>
using namespace std;
// formula-->(0.143⋅N)N
int main() {
	int t;
	cin>>t;
	while(t--)
	{
         int n;cin>>n;   
        //   cout<<pow((0.143*n),n)<<endl;	 
        // float c = pow((0.143*n),n);
        // cout<<"float "<<c<<endl;

        float x = pow((0.143*n),n);
    //    Print ⌊x⌋ if x−⌊x⌋<0.5
    //   Otherwise, print ⌊x⌋+1
         if(x<=0.99)
         {
             cout<<0<<endl;
         }
         else
         {
             int y = x+1;
             cout<<y<<endl;
         }
	}
	return 0;
}
