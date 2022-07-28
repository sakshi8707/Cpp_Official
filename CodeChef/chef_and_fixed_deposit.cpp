#include <bits/stdc++.h>
using namespace std;
//use lower bound stl it reduces the searching time
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		bool flag = false;
	    int maxno = 0,sum = 0,count;
	 int N;
	 cin>>N;
	 int arr[9];
	 for(int i=0;i<N;i++)
	 {
	     cin>>arr[i];
	 }
	 // main method
	 for(int i=0;i<N;i++)
	 {
	     sum = sum+arr[i];
	     count++;
	     if(sum >= N)
	     {
	         flag = true;
	         break;
	     }
	 }
	 if(flag == false)
	 {
		 cout<<"0"<<endl;
	 	 }
	 else
	 {
	     	 cout<<"3"<<endl;
	 }
   
	}
	return 0;
}
