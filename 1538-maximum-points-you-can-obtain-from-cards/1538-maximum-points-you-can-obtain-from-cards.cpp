class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long tmp=0,sum=0,ans=0;
        long left=0,l=cardPoints.size(),right=l-k;
        for(long i=0;i<l;i++){
            sum+=cardPoints[i];
        }
        for(long j=0;j<l-k;j++){
            tmp+=cardPoints[j];
            // cout<<tmp<<endl;
        }
        ans=sum-tmp;
        for(;right<l;left++,right++){
            tmp-=cardPoints[left];
            tmp+=cardPoints[right];
            // cout<<tmp<<endl;
            ans=max(ans,sum-tmp);
        }
        return(ans);
    }
};