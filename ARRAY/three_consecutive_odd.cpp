#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
     
        int n = arr.size();
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1)
            {
                return true;
                // break;
            }
        }
        return false;
    }
};

int main()
{

 int n;cin>>n;
 vector<int> v;
 for(int i=0; i<n; i++)
 {
     int a;cin>>a;
     v.push_back(a);
 }
 Solution obj;
 bool ans = obj.threeConsecutiveOdds(v);
 if(ans)
 {
     cout<<"YEs"<<endl;
 }
 else
 {
     cout<<"no"<<endl;
 }

  return 0;
}