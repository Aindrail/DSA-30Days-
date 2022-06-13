class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        bool ltoR = true;
        if(root==NULL) return ans;
        while(!q.empty()){
             int size = q.size();
            vector<int>row(size);
            for( int i = 0 ; i< size ; i++){
                TreeNode* node = q.front();
                q.pop();
                int ind = ltoR? i: size-i-1;
                row[ind] = node->val;
                if(node->left) q.push(node->left);
                if(node->right)q.push(node->right);
            }
            ltoR = !ltoR;
            ans.push_back(row);
        }
        return ans;
        
    }
};