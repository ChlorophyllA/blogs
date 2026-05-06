class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,minn=0;
        for(int i=1;i<prices.size();i++){
            minn=prices[i]<prices[minn]?i:minn;
            ans=max(ans,prices[i]-prices[minn]);
        }
        return ans;
    }
};