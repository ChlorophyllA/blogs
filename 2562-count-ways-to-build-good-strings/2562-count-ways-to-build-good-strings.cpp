class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        // long long dp[100001][100001]={0};
        // dp[1][1]=2;
        // for(long i=1;i<=high;i++){
        //     for(long j=1;j<one;j++){
        //         dp[i][j]=dp[i-1][j]+dp[i][j-1];
        //     }
        // }
        long long dp[100001]={0};
        // for(int i=1;i<min(zero,one);i++){
        //     dp[i]=0;
        // }
        dp[zero]=1;
        dp[one]+=1;
        for(int i=min(zero,one)+1;i<=high;i++){
            dp[i]=dp[max(i-zero,0)]%(1000000007)+dp[max(i-one,0)%1000000007]+dp[i];
            // cout<<dp[i]<<' ';
        }
        // cout<<endl;
        long long ans=0;
        for(int i=low;i<=high;i++){
            ans+=dp[i];
            ans%=1000000007;
        }
        return ans;
    }
};