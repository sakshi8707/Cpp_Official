#include<bits/stdc++.h>
using namespace std;

/*input
8
5 7 5 4 3 2 1
*/
// TIME COMPLEXITY : O(N)
void CountSort(int arr[],int n)
{
    int k;
    // for finding maximum no in array
    for(int i=0;i<n;i++)
{
     k= max(k,arr[i]);
}
int count[10] = {0};
// for finding count of every no present uin the array
  for (int i = 0; i < n; i++)
  {
      count[arr[i]]++;
  }
// arranging in order to sum of index
 for(int i = 1; i <=k; i++)
 {
     count[i]+=count[arr[i-1]];
 }
// decrementing count of no.
int output[n];
 for(int i =n-1;i>=0;i--)
 {
     output[--count[arr[i]]] = arr[i];
 }
//for printing output
for(int i = 0; i < n; i++)
 {
    arr[i] = output[i];
 }
} 


int main()

{
int n;  
cin>>n;
int arr[n];
for(int i = 0; i < n; i++)
{
    cin>>arr[i];
}
CountSort(arr , n);
// for printing output        
// for(int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }

    return 0;
} // namespace std;
