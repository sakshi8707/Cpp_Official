#include<bits/stdc++.h>
using namespace std;
//compare function (this work inside qsort() fun)
 int Compare(const void *a ,const void *b)
{
    const char* x = (char*)a;
    const char* y = (char*)b;
    if(*x < *y) return 1;
    else if(*x > *y) return -1;
    else return 0;
} 



int main()
{
    int n;
    cin>>n;    
char arr[n];
for(int i = 0; i < n;i++)
{
   cin>>arr[i];
}
//qsort() which means quick sort
qsort(arr, n, sizeof(char), Compare);

for(int i = 0; i < n;i++)
{
 cout<<arr[i]<<" ";
}
    return 0;
}