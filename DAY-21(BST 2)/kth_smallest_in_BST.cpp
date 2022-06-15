class Solution {
   
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        int i = 0;
        TreeNode* cur = root;
        while(cur!=NULL){
            if(cur->left==NULL){
                i++;
                    if(i==k)
                        ans= cur->val;
                cur=cur->right;
            }
            else
            {
                TreeNode* prev = cur->left;
                while(prev->right && prev->right!=cur ){
                    prev=prev->right;
                }
                if(prev->right==NULL){
                    prev->right= cur;
                    cur = cur->left;
                }

                else{
                    prev->right = NULL;
                    i++;
                    if(i==k)
                        ans=cur->val;
                    
                    cur= cur->right;
                    
                }
            }
        }
        return ans;
    }
};