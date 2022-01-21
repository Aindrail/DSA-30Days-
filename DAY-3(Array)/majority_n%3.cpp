class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0, c2=0, m1,m2;
        int n= nums.size();
        vector<int> ans;
        for(int i=0 ; i<n; i++){
            if(nums[i]==m1){
c1++;
}
else if(nums[i]==m2)
c2++;
else if(c1==0){
m1=nums[i];
    c1=1;
}
else if(c2==0){
 m2=nums[i];
    c2=1;
       }
else {
                c1--;
                c2--;
}

}
        c1=0;c2=0;
        for( int i =0 ; i<n ; i++){
            if(nums[i]==m1){
c1++;
            }
            if(nums[i]==m2){
c2++;}
        }
        
        if(c1>n/3){
ans.push_back(m1);
        }
        if(c2>n/3){
ans.push_back(m2);
        }
        return ans;
    }
};

// Qlink :- https://leetcode.com/problems/majority-element-ii/submissions/
// sol :- https://takeuforward.org/data-structure/majority-elementsn-3-times-find-the-elements-that-appears-more-than-n-3-times-in-the-array/
// TC :- O(n) o(2n)  SC :- O(1)
//Approach :- Moore's Voting ALgo . use 2 count and 2 num varable. if c1=0 or c2=0 take m1=arr[i] or m2=arr[i] resp. if(c1!=0)and c2!=0 and arr[i]is not eqal to m1 or m2 then make c1-- and c2--;.At last check occurance of m1 m2 if >n/3 add to ans.