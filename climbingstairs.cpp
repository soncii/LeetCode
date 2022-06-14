    int DP(int n, vector<int>& dp) {
        if (n==0) return 1;
        if (n<0) return 0;
        if (dp[n]!=-3) return dp[n];
        dp[n]=DP(n-1, dp)+DP(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-3);
        return DP(n, dp);
    }