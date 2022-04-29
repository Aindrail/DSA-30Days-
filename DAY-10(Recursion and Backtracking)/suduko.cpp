class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>> & board){
            for( int i = 0 ; i<board.size() ; i++){

            for( int j =0 ; j<board[0].size() ; j++){
                
                if(board[i][j]=='.'){
                    for( char ch ='1' ; ch<= '9' ; ch++){
                    if(isValid(board,ch,i,j)){

                    board[i][j]=ch;
                       if(solve(board)==true){
                        return true;
                       } 
                        board[i][j]='.';
                        
                    }

                } return false;
                    
                }
                
                
                
            }
            }
return true;
    }
    
    bool isValid(vector<vector<char>> & board, char ch, int row , int col){
         for( int i =0 ; i<9 ; i++){
            if(board[row][i]== ch){
              return false;
            }
             if(board[i][col]== ch){
              return false;
            }
             if(board[3*(row/3)+i/3][3*(col/3)+i%3]== ch){
              return false;
            }
         }
        return true;
    }
};
// Qlink :- leetcode.com/problems/sudoku-solver/
// Approach :- Find the first empty cell and try all possible values. If it is valid, recurse. If it is not valid, backtrack.
// Time Complexity: O(9^(n^2))))
// Space Complexity: O(1) 
