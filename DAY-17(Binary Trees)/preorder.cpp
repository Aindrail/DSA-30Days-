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
    void preorderTraver(TreeNode* root, vector<int> &ans){
        if(root == NULL)
            return ;
        ans.push_back(root->val);
        preorderTraver(root->left,ans);
        preorderTraver(root->right, ans);
    }
    
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorderTraver(root, ans);
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
        vector < int > preOrder;
  if (curr == NULL)
    return preOrder;

  stack < node * > s;
  s.push(curr);

  while (!s.empty()) {
    node * topNode = s.top();
    preOrder.push_back(topNode -> data);
    s.pop();
    if (topNode -> right != NULL)
      s.push(topNode -> right);
    if (topNode -> left != NULL)
      s.push(topNode -> left);
  }
  return preOrder;
    
};