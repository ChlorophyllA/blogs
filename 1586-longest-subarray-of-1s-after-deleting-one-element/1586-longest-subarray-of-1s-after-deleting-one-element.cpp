class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        long ans=0,siz=nums.size();
        for(long left=0,right=0,l=0,tmp=0;left<siz,right<siz;right++){            
            if(nums[right]) l++;
            else{
                tmp++;
            }
            while(tmp>1 && left<right){
                if(!nums[left]){
                    // l--;
                    tmp--;
                }
                else l--;
                left++;
            }
            ans=max(l,ans);
        }
        return min(ans,siz-1);
    }
};