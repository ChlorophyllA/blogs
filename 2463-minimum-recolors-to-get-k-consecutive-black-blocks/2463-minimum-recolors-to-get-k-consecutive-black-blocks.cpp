class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0,j=0,ans,tmp=0;
        for(;j<k;j++){
            if(blocks[j]=='W')
                tmp+=1;
        }
        ans=tmp;
        for(;j<blocks.length();j++,i++){
            if(blocks[i]=='W') tmp--;
            if(blocks[j]=='W') tmp++;
            ans=min(tmp,ans);
            if(!ans) return(0);
        }
        return(ans);
    }
};