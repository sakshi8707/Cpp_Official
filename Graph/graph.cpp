#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int graph[N][N]; // giving maximrm value
// creating vector for list adjecency
vector<pair<int,int> > graph2[N]; // creating pair of taking input of wt
int main()
{

int n,m;  // n = vertex , m = edges
cin>>n>>m;
for(int i = 0; i < m;i++)
{// for adjecency matrix
  int v1,v2,wt; //'wt' for wait of the edges

  cin>>v1>>v2>>wt; //
  graph[v1][v2] = 1;
  graph[v2][v1] = 1;
  // for list adjecency list
  graph2[v1].push_back(v2,wt);         // taking input of wt
  graph2[v2].push_back(v1,wt);
  // for finding conection in adjecency matrix O(1) space
  if(graph1[v1][v2] == 1)
  {
    cout<<"connected"<<endl;>>
  }
  // for finding conection in adjecency list O(n)
  for(pair<int,int> child : graph2[v1])
  {
      if(child.first == j)
      {
        cout<<"connected"<<endl;
      }
  }
}// space
  return 0;
}