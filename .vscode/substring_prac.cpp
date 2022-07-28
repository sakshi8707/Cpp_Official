#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    for(int i = 0; i < arr.size();i++)
      {
        for(int j = i; j < arr.size()-1;j++)
          {  // arr.substr(i,j);
            cout<<arr.substr(i,j);
        }
        cout<<endl;
    }

  return 0;
}