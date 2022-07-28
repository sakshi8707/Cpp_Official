#include<bits/stdc++.h>
using namespace std;

  // bool vis[];
   
    void dfs(vector<vector<char>>& grid , int i,int j,int row,int col)
    {
        row = grid.size();
        col = grid[0].size();
        if(i<=0 || j<=0 || i>=row || j>=col || grid[i][j] != '1')
        {
            return;
        }
        grid[i][j] = '2';
        dfs(grid,i+1,j,row,col);
        dfs(grid,i,j+1,row,col);
        dfs(grid,i-1,j,row,col);
        dfs(grid,i,j-1,row,col);

    }
    int island(vector<vector<char>>& grid )
    {
       int row = grid.size();
       int col = grid[0].size();
       if(row==0)
       {
           return 0;
       }
       int c=0;
      for(int i=0;i<row;i++)
      {
          for(int j=0;j<col;j++)
          {
              dfs(grid,i,j,row,col);
              c+=1;
          }
      }          
      return c;
    }

int main()
{
    vector<vector<char> > v;
    //vector<int> v;
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++)
{ 
    vector<char> temp;
    for(int j=0;j<m;j++)
    {
        char x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
    temp.clear();
}
cout<<"no of island is ------->"<<endl;
cout<<island(v)<<endl;
//printing vector values
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
// }
//another method 
cout<<"matrix is"<<endl;
for(auto i : v)
{
    for(auto j : i)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
  return 0;
   }
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// 4 5
// 1 1 1 1 0
// 1 1 0 0 0
// 1 1 0 0 0 
// 0 0 1 0 0