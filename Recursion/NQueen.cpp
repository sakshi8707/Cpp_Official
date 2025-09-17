#include<bits/stdc++.h>
using namespace std;



// TC:O(N! * N)
// SC : O(N)



class Solution {
public:


   void solve(int col , vector<string>& board , vector < vector < string >> & ans,vector < int > & leftRow , vector < int > & upperDia , vector < int > &lowerDia,int n)
   {
       if(col==n)
       {
        ans.push_back(board);
        return;
       }

       for(int r=0;r<n;r++)
       {
        if(leftRow[r]==0 && lowerDia[r+col]==0 && upperDia[n-1+col-r]==0)
        {
             //marking it
            board[r][col]= 'Q';
            leftRow[r] = 1;
            lowerDia[r+col] = 1;
            upperDia[n-1+col-r] =1 ;

            solve(col+1,board,ans,leftRow,upperDia,lowerDia,n); 

            //unmarking it
            board[r][col] = '.';
            leftRow[r] = 0;
            lowerDia[r+col] = 0;
            upperDia[n-1+col-r] = 0 ;
        }
       }
   }



    vector<vector<string>> NQueen(int n)
    {
      vector<vector<string>> ans;
      vector<string> board(n);
       string s(n,'.');
      for(int i=0;i<n;i++){
        board[i] = s;
      }

      vector<int> leftRow(n,0);
      vector<int> upperDia(2*n-1,0);
      vector<int> lowerDia(2*n-1,0);

      solve(0 , board , ans,leftRow , upperDia , lowerDia,n);
      return ans;
    }
};

int main(){
    
    return 0;
}