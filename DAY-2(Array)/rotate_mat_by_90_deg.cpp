class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for( int i=0 ; i<n; i++){
            for(int j=0;j<i;j++)
   swap(matrix[i][j],matrix[j][i]);
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
//Q link :- https://leetcode.com/problems/rotate-image/submissions/
// Logic :- 90 degree rotation is Transpose(arr[i][j]=arr[j][i]) and reverse to obtaine the matrix
// TC :- O(n2) SC :- O(1)