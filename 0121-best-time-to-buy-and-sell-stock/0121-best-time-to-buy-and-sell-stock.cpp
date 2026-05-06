class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,minn=prices[0];
        for(int i=1;i<prices.size();i++){
            minn=prices[i]<minn?prices[i]:minn;
            ans=max(ans,prices[i]-minn);
        }
        return ans;
    }
};