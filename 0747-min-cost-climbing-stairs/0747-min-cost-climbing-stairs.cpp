class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        long dp[1001]={0,0};
        int n=cost.size();
        for(int i=2;i<=n;i++){
            dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
            // cout<<dp[i]<<' ';
        }
        return(dp[n]);
    }
};