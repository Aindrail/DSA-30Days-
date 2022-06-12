/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool getAns(TreeNode* A, int B, vector<int> &ans){
     if(!A){
         return false;
     }
     ans.push_back(A->val);
     if(A->val == B)return true;
     if(getAns(A->left,B,ans)|| getAns(A->right,B,ans))
         return true;
     
     ans.pop_back();
     return false;
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> ans;
    if(A==NULL)
    return ans;
    if(getAns(A,B,ans))
    return ans;
    
}
