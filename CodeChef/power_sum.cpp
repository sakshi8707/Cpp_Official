#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int arr[],int N)
{
  int n=0;
  for(int i = 0; i < N; i++)
  {
    n = n+arr[i];
  }
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
int N;
cin>>N;
int arr[N];
int brr[N];
for(int i = 0; i < N; i++)
{
    cin>>arr[i];
    brr[i] = arr[i];
}
//  after input-------------main method----------------
//int n = sum;
  // for checking sum of array is power of 2 or Not
  if(isPowerOfTwo(arr,N)==true)
  {
     cout<<"0"<<endl;
  }
  //if sum is not power of two then converting it into
  else
  {
int sum = 0,countM = 0;
  vector<int> v;
    int X=2;
// while()
// {
 for(int i=0;i<N;i++)
 {
   arr[i] = arr[i]*X;
   v.push_back(i+1);
  //  if(isPowerOfTwo(brr,N)==true)
  //  {
  //    break;
  //    cout<<"now it is power of 2"<<endl;
  //  }
   //continue;
  
 }
  if(isPowerOfTwo(arr,N)==true)
   {
     cout<<"now it is power of 2"<<endl;
   } 
   else
   {
     cout<<"NO"<<endl;
   }
 for(int i=0;i<N;i++)
 {
   cout<<arr[i]<<" ";
 }
//    countM++;
// //}
// cout<<countM<<endl;
// cout<<v.size()<<" "<<X<<" "<<endl;
// for(auto V : v)
// {
//   cout<<V<<" ";
// }

}
  return 0;
}