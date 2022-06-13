class Solution {
    TreeNode* buildTree(vector<int>& preorder,int preStart,int preEnd,vector<int>& inorder,int inStart, int inEnd , unordered_map<int,int> &inMap){
        if(preStart>preEnd || inStart>inEnd) return NULL;
        TreeNode* node = new TreeNode(preorder[preStart]);
        int inRoot = inMap[node->val];
        int size = inRoot-inStart;
        node->left = buildTree(preorder,preStart+1,preStart+size,inorder,inStart,inRoot-1,inMap);
        node->right = buildTree(preorder,preStart+size+1,preEnd,inorder,inRoot+1,inEnd,inMap);
        return node;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> inMap;
        for(int i = 0 ; i<inorder.size(); i++){
             inMap[inorder[i]] = i;
        }
        TreeNode* root = buildTree(preorder,0,preorder.size()-1,inorder,0, inorder.size()-1 , inMap);
        return root;
    }
};