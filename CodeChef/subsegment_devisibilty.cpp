#include<bits/stdc++.h>
using namespace std;
/*
Sample Input 1 
2
3
4
Sample Output 1 
7 2 5
3 18 11 2
*/
bool checkSumDivisiblity(int i,int n)
{
   
}

int main()
{
 int t;cin>>t;
 while(t--)
 {
	 int n;cin>>n;     
	 for(int i = 0; i < n; i++)
	 {
		 int a;cin>>a;
		 if(checkSumDivisiblity(i,n))
		 {
			 a.add(arr[i]);
		 }

	 }
 }

  return 0;
}