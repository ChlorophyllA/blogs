class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        unordered_set<int> mset={};
        for(int i=0;i<nums.size();i++){
            mset.insert(nums[i]);
        }
        int ans=1;
        vector<int> mvec=vector(mset.begin(),mset.end());
        sort(mvec.begin(),mvec.end());
        for(int j=0,tmp=1;j<mvec.size()-1;j++){
            if(mvec[j]+1==mvec[j+1]){
                tmp++;
                // j++;
                ans=max(ans,tmp);
            }
            else{
                // j++;
                // left=j;
                tmp=1;
            }
        }
        return ans;
    }
};