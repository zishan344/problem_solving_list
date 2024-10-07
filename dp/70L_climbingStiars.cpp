class Solution {
public:
    long long dp[50];

    int fibo(int n) {
        if (n <=1)
            return 1;
        if (dp[n] != -1)
            return dp[n];
        dp[n] = fibo(n - 1) + fibo(n - 2);
        return dp[n];
    };
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        long long ans = fibo(n);
        return ans;
    }
};