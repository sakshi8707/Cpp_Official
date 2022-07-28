//---------question name-> SPOJ NAKANJ
// input = 3
// a1 h8
// a1 c2
// h8 c3
// output : 
// 6
// 1
// 4
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int INF = 1e9+10;

int vis[8][8];
int level[8][8];

int getX(string s)
{
    return s[0] = 'a';   
}

int getY(string s)
{
    return s[1] = '0';
}

vector<pair<int,int> > movement={
    {-1,2},{-1,-2},
    {1,-2},{1,2},
    {-2,1},{-2,-1},
    {2,1},{2,-1}
};

bool isValid(int x,int y)
{
  return (x >= 0 && x < 8 && y >= 0 && y < 8);
}

 int bfs(string source,string destination)
 {
     int sourceX = getX(source);
     int sourceY = getY(source);
     int destinationX = getX(destination);
     int destinationY = getY(destination);

     queue<pair<int,int> > q;
     q.push({sourceX,sourceY});
     vis[sourceX][sourceY] =1;
     level[sourceX][sourceY] =0;
    while(!q.empty())
    {
        pair<int,int> p = q.front();
        int x = p.first;
        int y = p.second;
        q.pop();
        for(auto movements : movement)
        {
            int childX = movements.first+x;
            int childY = movements.second+y;
           if(!isValid(childX,childY))
           {
               continue;
           }
           if(!vis[childX][childY])
           {
               q.push({childX,childY});
               level[childX][childY] = level[x][y] + 1;
               vis[childX][childY] =1;
           }
        }
        if(level[destinationX][destinationY] !=INF)
        {
            break;
        }
    }
    return level[destinationX][destinationY];
 }

void reset()
{
    for(int i = 0; i <8;i++)
    {
        for(int j = 0; j <8;j++)
        {
            level[i][j] = INF;
            vis[i][j] = 0;
        }
    }
}
int main()
{
int t;
cin>>t;
  while(t--)
  {
      reset();
      string s1,s2;cin>>s1>>s2;
      cout<<bfs(s1,s2)<<endl;
  }

  return 0;
}