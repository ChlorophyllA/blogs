class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(nums.size()<2*k+1){
            vector<int> ans(nums.size(),-1);
            return ans;
        }
        vector<int> ans={};
        int i=0,j=2*k+1,m;
        long long tmp=0;
        for(m=0;m<k;m++){
            ans.push_back(-1);
            // tmp+=nums[m];
        }
        for(int n=i;n<j;n++){
            tmp+=nums[n];
        }
        ans.push_back(tmp/(2*k+1));

        for(;j<nums.size();i++,j++){
            tmp=tmp-nums[i]+nums[j];
            ans.push_back(tmp/(2*k+1));
        }
        for(m=nums.size()-k;m<nums.size();m++){
            ans.push_back(-1);
        }
        return(ans);
    }
};