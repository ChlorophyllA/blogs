class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        // int ans;
        unsigned long long dp[1001]={0};
        // unordered_set<int> mmap={};
        for(int i=1;i<=nums.size();i++){
            dp[nums[i-1]]=1;
            // mmap.insert()
        }
        for(int i=1;i<=target;i++){
            // dp[target]+=(dp[i]+dp[target-i]);
            // cout<<dp[i];
            for(int j=0;j<nums.size();j++){
                if(i-nums[j]>0){
                    dp[i]+=dp[i-nums[j]];
                }
                // cout<<i<<' '<<dp[i]<<' '<<endl;
            }
        }
        return(dp[target]);
    }
};