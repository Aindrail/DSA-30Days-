class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[(nums.size())/2];
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
    }
};

// QLink :- https://leetcode.com/problems/majority-element/submissions/
// TC :- O(N) O(1)
//Approach :- Moore’s Voting Algorithm

// Intuition: The question clearly states that the nums array has a majority element. Since it has a majority element we can say definitely the count is more than N/2.

// Majority element count = N/2 + x;

// Minority/Other elements = N/2 – x;

// Where x is the number of times it occurs after reaching the minimum value N/2