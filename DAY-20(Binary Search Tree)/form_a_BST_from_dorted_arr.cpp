class Solution {
public:
    TreeNode* rec(vector<int>& nums, int start, int end) {
        if (start >= end) return NULL;
        int mid = (start + end) / 2;
        return new TreeNode(nums[mid], rec(nums, start, mid), rec(nums, mid+1, end));
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return rec(nums, 0, nums.size());
    }
};