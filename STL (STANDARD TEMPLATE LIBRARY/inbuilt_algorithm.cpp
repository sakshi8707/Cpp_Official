#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
    cin>>v[i];
    }
    // for finding minimum element
    cout<<"minimum element is :"<<endl;
    int min = *min_element(v.begin(),v.end());
    cout<<min<<endl;
    //for finding maximum element 
    cout<<"maximum element is :"<<endl;
    int max = *max_element(v.begin(),v.end());
    cout<<max<<endl;
    //for counting purpose we use acumulate function
    cout<<"count is :"<<endl;
    int cnt = count(v.begin(),v.end(),3);
    cout<<cnt<<endl;
    // for finding sum of no.
    cout<<"sum is :"<<endl;
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    //for finding an element    
    auto it = find(v.begin(),v.end(),10);
    if(it!=v.end())
    {
        cout<<*it<<endl;
    }
    else
    cout<<"element not found"<<endl;
    //reverse function
    reverse(v.begin(),v.end());
    cout<<"reverse string is:"<<endl;
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}