class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int,int> mmap={};
        int minn=INT_MAX,maax=0;
        for(int i=0;i<nums.size();i++){
            if(mmap.contains(nums[i])){
                mmap[nums[i]]++;
            }
            else{
                mmap.insert({nums[i],1});
            }
            minn=min(minn,nums[i]);
            maax=max(maax,nums[i]);
        }
        int dp[10001]={0};
        dp[minn]=minn*mmap[minn];
        if(minn!=maax){
            for(int j=minn+1;j<=maax;j++){
                dp[j]=max(dp[j-1],dp[j-2]+(mmap.contains(j)?j*mmap[j]:0));
            }
        }
        return dp[maax];
    }
};