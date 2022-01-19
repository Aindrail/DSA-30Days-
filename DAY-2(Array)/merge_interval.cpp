class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        
        for(auto interval : intervals){
        if(ans.empty()|| ans.back()[1]<interval[0]){
          ans.push_back(interval);      
          }
            else{
              ans.back()[1]= max(ans.back()[1],interval[1]);
            }
        }
        return ans;
        
    }
};

//Q link :- https://leetcode.com/problems/merge-intervals/
// Approach :- sort it. take an answer vector . push the interval if answer vec is empty or ans.back()[1]<interval[0] else change ans.back[1] to max(ans.back[1],interval[1])
// TC :- O(nlogn)+O(n)  SC :- O(n)(Worst Case)