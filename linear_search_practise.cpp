#include<iostream>
using namespace std;
int linearSearch(int arr,int n,int key)
{
    for(int i;i<n;i++)
    {
        if(arr[i]==key)
        return i;
        else
        return -1;
    }
}
int main()
{

    return 0;
}