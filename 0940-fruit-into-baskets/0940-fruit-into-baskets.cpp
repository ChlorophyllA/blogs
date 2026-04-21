class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        unordered_map<int,int> mmap={};
        for (int left=0,right=0,tmp=0,l=0;right<fruits.size();right++){
            l++;
            if(mmap.contains(fruits[right])){
                if(!mmap[fruits[right]]){
                    tmp++;
                }
                mmap[fruits[right]]++;
            }
            else{
                mmap.insert({fruits[right],1});
                tmp++;
            }
            while(tmp>2){
                mmap[fruits[left]]--;
                if(!mmap[fruits[left]]){
                    tmp--;
                }
                l--;
                left++;
            }
            // if(tmp>)
            ans=max(l,ans);
        }
        return ans;
    }
};