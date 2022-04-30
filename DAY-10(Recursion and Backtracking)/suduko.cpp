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

/*
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
 
 */
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> row;
            unordered_set<char> col;
            unordered_set<char> box;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(row.find(board[i][j])!=row.end()){
                        return false;
                    }
                    row.insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if(col.find(board[j][i])!=col.end()){
                        return false;
                    }
                    col.insert(board[j][i]);
                }
                int box_row=i/3;
                int box_col=j/3;
                int box_index=box_row*3+box_col;
                if(board[box_index][j%3*3+i%3]!='.'){
                    if(box.find(board[box_index][j%3*3+i%3])!=box.end()){
                        return false;
                    }
                    box.insert(board[box_index][j%3*3+i%3]);
                }
            }
        }
        return true;
        
    }
    
    
};
