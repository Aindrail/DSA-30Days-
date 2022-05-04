class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l =0 , r = nums.size()-1;
        if(nums.size()==1){
            return nums[0];
        }
        else{
            while(l<=r){
            int mid = (l+r)>>1;
            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    l = mid+1;
                }
                else
                    r = mid-1;
            }
            else{
              if(nums[mid]==nums[mid-1]){
                    l = mid+1;
                }
                else
                    r = mid-1;
            }
        }
        }
        
        return nums[l];
        
        
    }
};
//TC :- O(logN)