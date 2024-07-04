int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        if(s.size()==0) return 0;
        int maxlen=-1,l=0;
        for(int r=0;r<s.size();r++){
            if(set.find(s[r])!=set.end()){
                while(l<r && set.find(s[r])!=set.end()){
                    set.erase(s[l]);
                    l++;
                }
            }
            set.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
