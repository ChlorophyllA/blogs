class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        std::unordered_map<int,int> ma={};
        int i=0,j=k;
        long long tmp=0,ans=0;
        // bool flag=true;
        for(int n=0;n<k;n++){
            // if(flag && ma.size()<m){
            //     flag=false;
            // }
            if(ma.find(nums[n])==ma.end())
                ma.insert({nums[n],1});
            else ma[nums[n]]+=1;
            tmp+=nums[n];
        }
        if(ma.size()>=m) ans=tmp;
        for(;j<nums.size();i++,j++){
            ma[nums[i]]-=1;
            if(!ma[nums[i]]) ma.erase(nums[i]);
            tmp=tmp-nums[i]+nums[j];
            if(ma.find(nums[j])==ma.end())
                ma.insert({nums[j],1});
            else ma[nums[j]]+=1;
            if(ma.size()>=m)
                ans=max(ans,tmp);
            // cout<<tmp<<" i:"<<i<<" j:"<<j<<endl;
        }
        return(ans);
    }
};