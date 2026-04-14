class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        std::unordered_map<int,int> ma={};
        int i=0,j=k,tmp=0;
        long long sum=0,ans=0;
        // bool flag=true;
        for(int n=0;n<k;n++){
            // if(flag && ma.size()<m){
            //     flag=false;
            // }
            if(ma.find(nums[n])==ma.end())
                ma.insert({nums[n],1});
            else{
                if(ma[nums[n]]) tmp++;
                ma[nums[n]]+=1;
            }
            sum+=nums[n];
        }
        if(k-tmp>=m) ans=sum;
        for(;j<nums.size();i++,j++){
            ma[nums[i]]-=1;
            if(ma[nums[i]]) tmp--;
            sum=sum-nums[i]+nums[j];
            if(ma.find(nums[j])==ma.end())
                ma.insert({nums[j],1});
            else{
                if(ma[nums[j]]) tmp++;
                ma[nums[j]]+=1;
            }
            if(k-tmp>=m)
                ans=max(ans,sum);
            // cout<<sum<<" i:"<<i<<" j:"<<j<<endl;
        }
        return(ans);
    }
};