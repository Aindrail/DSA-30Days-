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
    void inorderTraver(TreeNode* root, vector<int> &ans){
        if(root == NULL)
            return ;
        inorderTraver(root->left,ans);
        ans.push_back(root->val);
        inorderTraver(root->right, ans);
    }
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderTraver(root, ans);
        return ans;
    }
};
//The upper part is recursive way of inorder traversal.
//The lower part is iterative way of inorder traversal.
//The iterative way is easier to understand.
//The recursive way is easier to implement.
class Solution {
    
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* cur = root;
        while(cur || !st.empty()){
            while(cur){
                st.push(cur);
                cur = cur->left;
            }
            cur = st.top();
            st.pop();
            ans.push_back(cur->val);
            cur = cur->right;
        }
        return ans;
    }
    
};