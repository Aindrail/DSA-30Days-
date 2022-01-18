
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool val= next_permutation(nums.begin(),nums.end());
        
    
    if(val==false){
        sort(nums.begin(), nums.end());
            }
        
    }
    
};

// Qlink :- https://leetcode.com/problems/next-permutation/
// use if(arr[i]<arr[i+1] take that i ) if(arr[n]<arr[n-1]) that n-1 and swap both indexs and from i reverse the array. INtuite :- dictionary intuite
//TC :- O(n) SC :- O(1)