/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int CheckBal(TreeNode* root){
        if(root==NULL)return 0;
        int l = CheckBal(root->left);
        int r = CheckBal(root->right);
        if(l==-1 || r==-1) return -1;
        if((l-r)>1 || (r-l)>1) return -1;
        return 1+max(l,r);
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==0)return true;
        if(CheckBal(root)==-1)return false;
        else return true;
        
    }
};
//If any height diff is geater than 1, then it is not balanced. and return -1 and check that for all next step it remains -1.