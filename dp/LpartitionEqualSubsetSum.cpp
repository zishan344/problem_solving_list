class Solution {
public:
   int dp [205][20005];
   bool checkPartition(int n, vector<int>&nums, int target){
   if(n==0){
      if(target == 0) return true;
      return false;
   };
    if(dp[n-1][target]!=-1) return dp[n-1][target];
    if(nums[n-1]<=target){
      bool pick = checkPartition(n-1,nums, target-nums[n-1]);
      bool unpick = checkPartition(n-1, nums, target);
      return dp[n-1][target] = pick||unpick;
    }else{
      bool unpick = checkPartition(n-1, nums, target);
      return dp[n-1][target] = unpick;
    };
   };
    bool canPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n = nums.size();
        int sum = 0;
        for(auto val :nums) sum+=val;
        if(sum%2==1) return 0;
        int target = sum/2;
         
        return checkPartition(n,nums,target);
    }
};