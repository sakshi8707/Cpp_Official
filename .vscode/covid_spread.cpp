#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,d;
cin>>n>>d;
int ans = 1;
int b;
// if(d==0)
// {
//     cout<<"1"<<endl;
//}
for(int i = 1; i <= d; i++)
{
     if(d<=10)
     {
         ans = ans*2;
     }
     else if(d>10)
     {
         ans = ans*3;
     }
     else
     {
         ans = 1;
     }
}

// if(d<=10)
// {
// while(d--) 
// {

// ans = ans*2;
// }
//  b = ans;
// }
// //for d greater than 10  
//  else if( d>10 || d<= 11)
// {
//     ans = b;
//     while(d--) 
//     {
//          ans = ans * 3;
//     }
// }

if(ans>n)
{
cout<<n<<endl; 
}
else
{
cout<<ans;
}


  return 0;
}

