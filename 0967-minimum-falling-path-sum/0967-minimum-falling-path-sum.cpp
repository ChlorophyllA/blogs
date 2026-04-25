class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int dp[100][100];
        int m=matrix.size(),n=matrix[0].size();
        for(int k=0;k<n;k++){
            dp[0][k]=matrix[0][k];
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=min(min(dp[i-1][max(j-1,0)],dp[i-1][j]),dp[i-1][min(n-1,j+1)])+matrix[i][j];
            }
        }
        return *min_element(dp[m-1],dp[m-1]+n);
    }
};