class Solution{   
public:
    int dp[105][10005];
    bool checkSum(vector<int>arr,int n, int sum){
        if(n==0){
            if(sum==0)return true;
            return false;
          };
         if(dp[n][sum]!=-1) return dp[n][sum]; 
       if(arr[n-1]<=sum){
           bool pick = checkSum(arr,n-1,sum-arr[n-1]);
           bool unPick = checkSum(arr,n-1,sum);
           return dp[n-1][sum] = pick||unPick;
       }else{
           bool unPick = checkSum(arr,n-1,sum);
           return dp[n-1][sum]= unPick;
       }
          
    };
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        memset(dp,-1,sizeof(dp));
        int n = arr.size();
        return checkSum(arr,n,sum);
    }
};