class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans= INT_MIN;
        int minNo= INT_MAX;
        for(int i =0 ;i<prices.size(); i++){
      minNo = min(prices[i],minNo);
            ans = max(ans,prices[i]-minNo);
            
            
   }
        return ans;
    }
};

// Q link :- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Approch :- find min in every index and if the subtract the min with current index in every step. and compare if it is max. return ans