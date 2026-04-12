class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=k;
        int ans=0;
        float tmp=0;
        for(int m=0;m<k;m++){
            tmp+=arr[m];
        }
        // ans=tmp;
        float a=threshold*k;
        if(tmp>=a) ans++;
        for(;j<arr.size();i++,j++){
            tmp=tmp+arr[j]-arr[i];
            if(tmp>=a) ans++;
        }
        return ans;
    }
};