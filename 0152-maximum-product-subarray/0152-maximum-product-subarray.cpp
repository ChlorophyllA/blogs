class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int dp[20000][2]={0};
        dp[0][0]=nums[0];
        dp[0][1]=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            dp[i][0]=max(max(dp[i-1][0]*nums[i],dp[i-1][1]*nums[i]),nums[i]);
            dp[i][1]=min(min(dp[i-1][0]*nums[i],dp[i-1][1]*nums[i]),nums[i]);
            ans=max(ans,dp[i][0]);
        }
        return ans;
    }
};