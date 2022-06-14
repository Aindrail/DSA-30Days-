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
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return bFP(preorder,i,INT_MAX);
        
    }
    
    TreeNode* bFP(vector<int>& preorder,int &i, int limit){
           if(i==preorder.size()|| preorder[i]>limit ) return NULL;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = bFP(preorder,i,root->val);
        root->right = bFP(preorder,i,limit);
        return root;
    }
};