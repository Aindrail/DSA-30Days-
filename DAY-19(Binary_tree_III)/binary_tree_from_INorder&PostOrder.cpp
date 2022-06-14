class Solution {
    TreeNode* buildTree(vector<int>& postorder,int postStart,int postEnd,vector<int>& inorder,int inStart, int inEnd , unordered_map<int,int> &inMap){
        if(postStart>postEnd || inStart>inEnd) return NULL;
        TreeNode* node = new TreeNode(postorder[postEnd]);
        int inRoot = inMap[postorder[postEnd]];
        int size = inRoot-inStart;
        node->left = buildTree(postorder,postStart,postStart+size-1,inorder,inStart,inRoot-1,inMap);
        node->right = buildTree(postorder,postStart+size,postEnd-1,inorder,inRoot+1,inEnd,inMap);
        return node;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        for( int i = 0; i<inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        TreeNode* root = buildTree(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
};