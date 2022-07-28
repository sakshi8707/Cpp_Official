#include<bits/stdc++.h>
using namespace std;

bool ispoweroftwo(int sum)
{
   if(sum==0)
   return false;
 
   return (ceil(log2(sum)) == floor(log2(sum)));

}
int main()
{

int t;
cin>>t;
while(t--)
{
    int n;         
    cin>>n;
    int arr[n];
    vector<int> v;
    int sum = 0,countm = 1;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    //cout<<"sum : "<<sum<<endl;
    // after input-----------
    if(ispoweroftwo(sum)==true)
    {
        cout<<"0"<<endl;
    }
    else
    {
      sort(arr,arr+n);
        int j = 1;
        int x = 2;
    while(ispoweroftwo(sum)==true)
     {
    for(int i=0; i<n;i++)
      {
        sum = sum+arr[i]*j;
        v.push_back(i+1);
       if(ispoweroftwo(sum)==true)
       {
          // cout<<"now is power of two"<<endl;
           cout<<countm<<" "<<endl;
           cout<<v.size()<<" "<<x<<" "<<endl;
           for(auto v : v)
           {
               cout<<v<< " ";
           }
           cout<<endl;
           break;
       }
      } 
       countm++;
       j++,x++;
     }
    }
   //  cout<<"-1"<<endl;
}

  return 0;
}