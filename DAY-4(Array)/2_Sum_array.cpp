vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> res;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); ++i) {

   	 if (mp.find(target - nums[i]) != mp.end()) {

   		 res.emplace_back(i);
   		 res.emplace_back(mp[target - nums[i]]);
   		 return res;
   	 }

   	 mp[nums[i]] = i;
    }

    return res;
}
//Qlink :-https://takeuforward.org/data-structure/two-sum-check-if-a-pair-with-given-sum-exists-in-array/
// TC :- O(n) SC :- O(N)
//Approach: We can solve this problem efficiently by using hashing. We’ll use a hash-map to see if there’s a value target – i that can be added to the current array value i to get the sum equals to target. If target – i is found in the map, we return the current index, and index stored at target – nums[index] location in the map. 