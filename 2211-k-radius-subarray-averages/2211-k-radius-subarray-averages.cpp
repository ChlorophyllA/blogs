class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long l=nums.size();
        if(l<2*k+1){
            vector<int> ans(l,-1);
            return ans;
        }
        vector<int> ans={};
        int i=0,j=2*k+1,m;
        long tmp=0;
        for(m=0;m<k;m++){
            ans.push_back(-1);
            // tmp+=nums[m];
        }
        for(int n=i;n<j;n++){
            tmp+=nums[n];
        }
        ans.push_back(tmp/(2*k+1));

        for(;j<l;i++,j++){
            tmp=tmp-nums[i]+nums[j];
            ans.push_back(tmp/(2*k+1));
        }
        for(m=l-k;m<l;m++){
            ans.push_back(-1);
        }
        return(ans);
    }
};