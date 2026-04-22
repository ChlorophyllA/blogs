class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int dp[50][50]={0};
        int ans=INT_MAX;
        int m=grid.size(),n=grid[0].size();
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=INT_MAX;
                for(int k=0;k<n;k++){
                    dp[i][j]=min(dp[i][j],dp[i-1][k]+moveCost[grid[i-1][k]][j]+grid[i-1][k]);
                }
                if(i==m-1) ans=min(ans,dp[i][j]+grid[i][j]);
            }
        }
        return ans;
    }
};