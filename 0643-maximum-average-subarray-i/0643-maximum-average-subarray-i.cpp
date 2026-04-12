class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double tmp=0,sum=-65336;
        int i=0,j=k;
        for(;i<k;i++){
            tmp+=nums[i];
        }
        sum=tmp;
        for(i=0;j<nums.size();i++,j++){
            tmp=tmp-nums[i]+nums[j];
            if(nums[j]>nums[i])
                sum=max(tmp,sum);
            // cout<<tmp<<' '<<sum<<endl;
        }
        return(sum/k);
    }
};