#include<bits/stdc++.h>
using namespace std;


// TC : O(n^m)
// SC : O(n)

class Node{
    public:
    int val;
    Node* next;
    Node(int data)
    {
        data = val;
        next = NULL;
    }
};


class Solution {
public:

    bool isSafe(int node , int currColor , vector<int>& color,vector<int> adj[] , int n)
    {
        for(int i=0;i<n;i++)
        {
            if(color[i]==currColor && adj[i][node]==1 && i!=node)
            {
                return false;
            }
        }
        return true;
    }
      

    bool coloring(int node , int m , vector<int> adj[] , int n , vector<int>& color)
    {
        //base case 
        if(node==n)return true;


        for(int i=1;i<m;i++)
        {
            if(isSafe(node , i,color,adj,n)==true)
            {
                color[node] = i;
                if(coloring(node+1,m,adj,n,color))
                {
                    return true;
                }
                color[node] = 0;         
            }
        }
        return false;
    }


    bool MColoring(int n , int m ,  int e , vector<int> adj[])
    {
        vector<int> color(n,0);
        return coloring(0 ,m , adj , n,color);
    }
};

int main(){
    
    return 0;
}