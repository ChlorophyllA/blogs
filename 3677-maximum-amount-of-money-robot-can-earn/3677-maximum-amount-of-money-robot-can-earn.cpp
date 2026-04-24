class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int dp[501][501][3]={0};
        // int skill_num[501][501]={0};
        int m=coins.size(),n=coins[0].size();
        for(int k=1;k<=n;k++){
            dp[0][k][1]=INT_MIN;
            dp[0][k][0]=INT_MIN;
            dp[0][k][2]=INT_MIN;
        }
        for(int i=1;i<=m;i++){
            if(i-1) {
                dp[i][0][0]=INT_MIN;
                dp[i][0][1]=INT_MIN;
                dp[i][0][2]=INT_MIN;
            }
            for(int j=1;j<=n;j++){
                int tmp1=max(dp[i-1][j][0],dp[i][j-1][0]);
                int tmp2=max(dp[i-1][j][1],dp[i][j-1][1]);
                int tmp3=max(dp[i-1][j][2],dp[i][j-1][2]);
                dp[i][j][0]=tmp1+coins[i-1][j-1];
                dp[i][j][1]=max(tmp1,tmp2+coins[i-1][j-1]);
                dp[i][j][2]=max(tmp2,tmp3+coins[i-1][j-1]);

            }
        }
        return dp[m][n][2];
    }
};