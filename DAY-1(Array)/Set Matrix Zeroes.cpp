class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col=1, m=matrix.size(),n=matrix[0].size();
        for( int i =0 ; i<m; i++){
if(matrix[i][0]== 0 ) col=0;
            for(int j=1;j<n;j++){
if(matrix[i][j]==0){
matrix[0][j]=0;matrix[i][0]=0;
}
            }
        
        }
        for(int i=m-1;i>=0;i--){
for(int j=n-1;j>=1;j--){
if(matrix[i][0]==0 || matrix[0][j]==0){
 matrix[i][j]=0;
}
}if(col==0)matrix[i][0]=0;
        }
        
    }
};

// Qlink :- leetcode.com/problems/set-matrix-zeroes/
// logic ;- take row one and column 1 as counter of 0 so when 0 is found inside matrice make a[0][j]=0 and a[i][0]=0. Take care of col 1 having 0 then make col0 as true . tranverse matrice from back checking a[i][0]=0 || a[0][i]=0 then make a[i][j]=0. if col0=0 then make a[i][0]=0 also. 
// TC :- O(n*m) SC :- O(1)