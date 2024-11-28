class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,0);
        for(int i=0; i<n; i++){
            // Remember that steps can start from 0th step or 1st step (n=0 and n=1)
            if(i<2){
                dp[i]=cost[i];
            } 
            else{
                // 
                dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
            }
        }
        return min(dp[n-1],dp[n-2]);
    }
};