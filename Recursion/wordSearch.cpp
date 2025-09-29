  #include<bits/stdc++.h>
  using namespace std;
  
//   TC: O(n*m*(4^k))  where k = len of word 
//   SC : o(k)
  
  int main(){
      
      return 0;
  }



   class Solution {
   public:

    bool searchWord(int idx , int r , int c , string word , vector<vector<char>>& board , int m , int n)
    {
        if(idx==word.size())
         {
            return true;
         }
         //boundary check 
         if (r < 0 || c < 0 || r == m || c == n || board[r][c] != 
        word[idx] || board[r][c] == '!')
            return false;

         //taking extra char to avoid duplicate check
         char ch = board[r][c];
         board[r][c] = '!';

         //caling in all four direction 
         bool top = searchWord(idx+1 , r-1 , c , word , board,m,n);
         bool right = searchWord(idx+1 , r , c+1 , word , board,m,n);
         bool bottom = searchWord(idx+1 , r+1 , c , word , board,m,n);
         bool left = searchWord(idx+1 , r , c-1 , word , board,m,n);

         //re changing
         board[r][c] = ch;

         return top||left||bottom||right;
    }


    bool exist(vector<vector<char>>& board, string word) {
         
        int n = board.size();
        int m = board[0].size();

        //finding first st char that mathces with word
        int idx=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(searchWord(0 ,  i ,  j , word , board , n , m))
                       return true;
                }
            }
           
        }
        return false;
    }
};