#include<bits/stdc++.h>
using namespace std;

/*
brute forche approch
TC : O(N * N!)
SC : O(N^2)


optimal approch
TC : O(N * N!)
SC : O(N)
*/


class Solution {
public:

    
    void solve(int col , vector<string>& board , vector<vector<string>>& ans , vector<int>& leftRow, vector<int>& upperDig , vector<int>& lowerDig , int n)
    {
        //base case
        if(col==n){
           ans.push_back(board);
           return;
        }


        for(int row = 0;row<n;row++)
        {
           //checking , is it valid to insert 'Q'
            if(lowerDig[row+col]==0 && upperDig[(n-1)+(row-col)]==0 && leftRow[row]==0){

              board[row][col] = 'Q';
              leftRow[row] = 1;
              upperDig[(n-1)+(row-col)]  = 1;
              lowerDig[row+col]=1;

              solve(col+1 , board , ans , leftRow,upperDig , lowerDig , n);

              board[row][col] = '.';
              leftRow[row] = 0;
              upperDig[(n-1)+(row-col)]  = 0;
              lowerDig[row+col]=0;

            }
        }
    }

    vector<vector<string>> nQueen(int n)
    {
       vector<vector<string>> ans;
       vector<string> board(n);

       //now storing each string in board
       string s(n,'.');
       for(int i=0;i<n;i++)
       {
          board[i] = s;
       }

       vector<int> leftRow(n);
       vector<int> upperDig(2*n-1,0);
       vector<int> lowerDig(2*n-1,0);
       int col = 0;
       solve(col , board , ans , leftRow,upperDig , lowerDig , n);
       return ans;

    }
};

int main(){
    
    return 0;
}
