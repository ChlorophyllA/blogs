class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> mmap={{'(',-1},{')',1},{'{',-2},{'}',2},{'[',-3},{']',3}};
        int flag=0;
        if(s.length()<2) return false;
        vector<int> stack={};
        // stack.push_back(s[0]);
        // flag+=mmap[s[0]];
        // if(flag>0) return false;
        for(int i=0;i<s.length();i++){
            stack.push_back(s[i]);
            flag+=mmap[s[i]];
            if(flag>0) return false;
            int a=stack.size();
            if(a>1 && !(mmap[stack[a-1]]+mmap[stack[a-2]]))
            {stack.pop_back();
            stack.pop_back();}
        }
        if(stack.size())return false;
        else return true;
    }
};