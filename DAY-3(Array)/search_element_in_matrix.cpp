class Solution {
public:
    bool searchMatrix(vector<vector<int>>& M, int target) {
        int m=M.size();
        int n= M[0].size();
        int i=0;
        if(target>=M[0][0]){
while(i<m){
          if(M[i][0]>target)
    break;
       else   
    i++;
        }
      --i;
for( int j =0 ; j<n ;j++){
    if(M[i][j]==target){
return true;}
        }
        return false;
        }
        else{
return false;
        }
        
    }
};

//Q link :- https://leetcode.com/problems/search-a-2d-matrix/submissions/
//TC :- O(n+m) SC :- O(1)
// Approach :- Compare with first element of each row and when target is >= it compare for coloumn element if found true else all false.
