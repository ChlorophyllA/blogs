class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0,ans=0;
        long i=0,j=k,tmp=0;
        unordered_map<long,long> ma={};
        bool flag=true;
        for(int m=0;m<k;m++) {
            if(ma.contains(nums[m])){
                if(ma[nums[m]]){
                    tmp++;
                    if(flag) flag=false;
                }
                ma[nums[m]]++;
            }
            else{
                ma.insert({nums[m],1});
            }
            // if(flag && ma[nums[m]]>1){
            //     flag=false;
            // }
            // cout<<ma[nums[m]]<<endl;
            sum+=nums[m];
        }
        // cout<<flag;
        if(flag) ans=sum;
        for(;j<nums.size();i++,j++){
            ma[nums[i]]--;
            if(ma[nums[i]]) tmp--;
            if(ma.contains(nums[j])){
                if(ma[nums[j]])tmp++;
                ma[nums[j]]++;
            }
            else{
                ma.insert({nums[j],1});
            }
            sum-=nums[i];
            sum+=nums[j];
            if(!tmp){
                ans=max(ans,sum);
            }
            
        }
        return(ans);
    }
};