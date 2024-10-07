class Solution {
public:
    int dp[1005][20005];
    int checkSum(int n, vector<int>& nums, int target) {
        if (n == 0) {
            if (target == 0)
                return 1;
            return 0;
        };
        if (dp[n - 1][target] != -1)
            return dp[n - 1][target];
        if (nums[n - 1] <= target) {
            int pick = checkSum(n - 1, nums, target - nums[n - 1]);
            int unpick = checkSum(n - 1, nums, target);
            return dp[n - 1][target] = pick + unpick;
        } else {
            int unpick = checkSum(n - 1, nums, target);
            return dp[n - 1][target] = unpick;
        }
    };
    int findTargetSumWays(vector<int>& nums, int target) {
        memset(dp, -1, sizeof(dp));
        int n = nums.size();
        int sum = 0;
        for (int val : nums)
            sum += val;
        int s1 = (target + sum) / 2;
        if (s1 < 0)
            return 0;
        if (target > sum || (target + sum) % 2 == 1)
            return 0;
        return checkSum(n, nums, s1);
    };
};