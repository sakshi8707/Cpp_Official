#include<bits/stdc++.h>
using namespace std;

int main()
{
  int row,col;
  cin>>row>>col;
  vector<vector<int>> vec;
  // taking input
  for(int i=0;i<row;i++)
  {
    vector<int> temp;
    for(int j=0;j<col;j++)
    {
      int num;cin>>num;
      temp.push_back(num);
    }
    vec.push_back(temp);
  } 
  //displaying the 2D vector
  for(int i=0;i<vec.size();i++)
  {
    for(int j=0;j=vec[i].size();j++)
    {
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}