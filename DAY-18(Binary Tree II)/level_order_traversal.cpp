class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        if(root==NULL)
       return ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> lvl;
            int size = q.size();
            for( int i = 0 ; i< size; i++){
                TreeNode* temp = q.front();
                q.pop();
                lvl.push_back(temp->val);
                if(temp->left){
                   q.push(temp->left);
                }
                if(temp->right) {
                    q.push(temp->right);
                }
                
            }
            ans.push_back(lvl);
        }

        
        return ans;
              
    }
};