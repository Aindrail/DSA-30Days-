class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         while(nums[0] != nums[nums[0]])
//             swap(nums[0],nums[nums[0]]);
//         return nums[0];

        
//         return -1;
        
        vector<int> vec (nums.size(),0);
    for(auto a : nums) {
        if(vec[a]==1){
return a;}
vec[a]++;}
    // for(int i=0; i<nums.size(); i++)
    //     if(vec[i]>1) return i;
    return -1;
        
        
        
    }
};

// Qlink :- https://leetcode.com/problems/find-the-duplicate-number/
// Approach :- use vector or hash . TC :- O(N) SC :- O(n)
// Approach(2) :- use arr[i]!=arr[arr[i]] swap both and if equal display arr[i] for space O(1).

