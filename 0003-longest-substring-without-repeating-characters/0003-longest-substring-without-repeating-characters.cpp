class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mmap={};
        int ans=0,tmp=0,left=0,right=0;
        // int left=0,right=0;
        for(;right<s.length();right++){
            tmp++;
            // cout<<"右指针动"<<left<<' '<<right<<' '<<tmp<<' '<<ans<<endl;
            if(mmap.contains(s[right])){
                mmap[s[right]]++;
                while(mmap[s[right]]>1){
                    mmap[s[left]]--;
                    left++;
                    tmp--;
                    // cout<<"左指针动"<<left<<' '<<right<<' '<<s[left]<<' '<<ans<<endl;
                }
            }
            else
                mmap.insert({s[right],1});
            ans=max(ans,tmp);
        }
        return(ans);
    }
};