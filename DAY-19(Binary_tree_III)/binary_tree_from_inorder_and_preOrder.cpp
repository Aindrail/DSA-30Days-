class Solution {
    TreeNode* buildTree(vector<int>& postorder,int postStart,int postEnd,vector<int>& inorder,int inStart, int inEnd , unordered_map<int,int> &inMap){
        if(postStart>postEnd || inStart>inEnd) return NULL;
        TreeNode* node = new TreeNode(postorder[postStart]);
        int inRoot = inMap[node->val];
        int size = inRoot-inStart;
        node->left = buildTree(postorder,postStart+1,postStart+size,inorder,inStart,inRoot-1,inMap);
        node->right = buildTree(postorder,postStart+size+1,postEnd,inorder,inRoot+1,inEnd,inMap);
        return node;
    }
public:
    TreeNode* buildTree(vector<int>& postorder, vector<int>& inorder) {
        unordered_map<int,int> inMap;
        for(int i = 0 ; i<inorder.size(); i++){
             inMap[inorder[i]] = i;
        }
        TreeNode* root = buildTree(postorder,0,postorder.size()-1,inorder,0, inorder.size()-1 , inMap);
        return root;
    }
};