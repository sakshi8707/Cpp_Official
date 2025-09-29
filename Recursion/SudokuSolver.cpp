#include<bits/stdc++.h>
using namespace std;

// TC:9^(n^2)
// Sc : o(1)

class Solution {
public:

    bool isValid(char ch , int r , int c , vector<vector<char>>& board)
    {
       for(int i=0;i<9;i++)
       {
        if(board[i][c]==c)
        {
            return false;
        }
        if(board[r][i]==c)
        {
            return false;
        }
        //for 3x3 grid formula

        if(board[3*(r/3)+i/3][3*(c/3)+i%3]==c)
        {
            return false;
        }
       }
       return true;
    }


    bool solveS(vector<vector<char>>& board,int n)
    {

     for(int i=0;i<n;i++)
      {
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]=='.'){
                for(char c = '1';c<='9';c++)
                {
                    if(isValid(c,i,j,board))
                    { 
                        board[i][j] = c;
                        if(solveS(board,n)==true)
                        {
                          return true;
                        }
                        else{
                            board[i][j] = '.';
                        }
                        
                    }
                }
                return false; 
            }
        }
      }
      return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
      int n = board.size();
       solveS(board,n);
    }
};


int main(){
    
    return 0;
}