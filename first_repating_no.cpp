

#include<bits/stdc++.h>
using namespace std;
int   first_index_of_element(int arr[],int n,int key)
{
        
   for(int i=0;i<n;i++)
     {
         if(arr[i]==key)
             return i;
    }
    return -1;
     //cout<<"-1"<<endl;
}

int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
cout<< first_index_of_element(arr,n,key)<<endl;
 
    return 0;
}