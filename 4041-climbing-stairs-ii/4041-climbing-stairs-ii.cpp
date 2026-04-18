class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        // cout<<costs[0];
        if(costs.size()==1) return(1+costs[0]);
        
        int dp[100001]={0,1+costs[0],min(4+costs[1],1+costs[1]+1+costs[0])};
        for(int i=3;i<=n;i++){
            dp[i]=min(min(dp[i-1]+costs[i-1]+1,dp[i-2]+costs[i-1]+4),dp[i-3]+costs[i-1]+9);
        }
        return(dp[n]);
    }
};