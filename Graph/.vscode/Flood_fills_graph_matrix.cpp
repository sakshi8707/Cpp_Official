#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> image;
//vector<int> m;

 void dfs(vector<vector<int>>& image,int i,int j,int initialcolor,int newcolor)
{
    if(i<0 || j<0)
    {
        return;
    }
    if(image[i][j] != initialcolor)
    {
        return;
    }
    image[i][j] = newcolor;
    dfs(image,i+1,j,initialcolor,newcolor);
    dfs(image,i-1,j,initialcolor,newcolor);
    dfs(image,i,j+1,initialcolor,newcolor);
    dfs(image,i,j-1,initialcolor,newcolor);

}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        int initialcolor = image[sr][sc];
        if(initialcolor != newColor)
        dfs(image,sr,sc,initialcolor,newColor);
    }

int main()
{
vector<vector<int>> image;
int n,m;
cin>>n>>m;
//int image.size() = n;
//int image.size() = m;
for(int i = 0; i < image.size(); i++)
{
    for(int j=0;j< image[i].size();j++)
    {
        cin>>image[i][j];
    }
}

int sr,sc,newcolor;
cin>>sr>>sc>>newcolor;

floodFill(image,sr,sc,newcolor);

for(int i = 0; i < image.size(); i++)
{
    for(int j=0;j< image[i].size();j++)
    {
        cout<<image[i][j]<<" ";
    }
}

  return 0;
}