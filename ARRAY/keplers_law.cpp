#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int t1,t2,r1,r2;
	   cin>>t1>>t2>>r1>>r2;
	   int a1= t1*t1;
       int a2=r1*r1*r1;
	   int b1 = t2*t2;
       int b2=r2*r2*r2;
    //    cout<<"a1 "<<a1<<" "<<endl;
    //    cout<<"a2 "<<a2<<" "<<endl;
    //    cout<<"b1 "<<b1<<" "<<endl;
    //    cout<<"b2 "<<b2<<" "<<endl;
    //    cout<<"a1*b2 "<<a1*b2<<" "<<endl;
    //    cout<<"a2*b1 "<<a2*b1<<" "<<endl;
	//    //if(a==b)
    //    cout<<"keplers law exists or not===>"<<endl;
       if(a1*b2==a2*b1)
	   {
	       cout<<"YES"<<endl;
	   }
	   else
	   {
	       cout<<"NO"<<endl;
	   }
	   
	}
	return 0;
}
