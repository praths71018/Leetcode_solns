class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0); 
        //creating a vector of size n+1 with all values being 0

        // DP involves solving subproblems and storing them in table so that no need to calculate those subproblems again and again

        // Initialize default cases 
        dp[0]=1; // to climb 0 steps(n=0) there is only 1 way i.e. dont climb
        dp[1]=1; // to climb 1(n=1) step there is only 1 way i.e. climb 1 step

        // for n=2 and beyond
        // Now comes reason for DP:
        // for eg: for n=2 there are two ways to climb steps i.e. 1step+1step and 2 steps
        // Algorithm is that for n=2 to have 2 ways we add the ways to climb steps in n=1 and n=0 hence making it dp[2]=dp[0]+dp[1]== 1+1 =2
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};