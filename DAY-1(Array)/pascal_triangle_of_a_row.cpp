class Solution {
public:
    int nCr(int n, int r){
         long int ans=1;
        for(int i=0;i<r;++i){
           ans*=(n-i);
            ans/=(i+1);
        }
        return ans;
    }
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1);
        if(rowIndex==0){
        ans[0]=1;
            return ans;
        }
        ans[0]=1; ans[rowIndex]=1;
        for(int i=1;i<rowIndex;i++){
        ans[i]= nCr(rowIndex,i);
        }
        return ans;
    }
    
};

// Qlink :- https://leetcode.com/problems/pascals-triangle-ii/submissions/
// Approach :- if row=r and col = c then value at a[r][c]=r-1 C c-1 so find nCr by using ans*=(n-1) ans/=(i+1)