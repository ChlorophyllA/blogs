class Solution {
public:
        vector<vector<int>> ans={};
        void dfs(vector<int> tmp, vector<int> rest_num){
            if(!rest_num.size()) {
                ans.push_back(tmp);
                return;
            }
            else{
                for(int i=0;i<rest_num.size();i++){
                    swap(rest_num[0],rest_num[i]);
                    tmp.push_back(rest_num[0]);
                    dfs(tmp,vector(rest_num.begin()+1,rest_num.end()));
                    tmp.pop_back();
                    swap(rest_num[0],rest_num[i]);
                }
            }
        }
    vector<vector<int>> permute(vector<int>& nums) {
        if(!(nums.size()-1)) return {{nums[0]}};
        dfs({},nums);
        // vector<vector<int>> ans1=ans;
        return ans;
    }
};