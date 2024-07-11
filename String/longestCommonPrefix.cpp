string longestCommonPrefix(vector<string>& strs) {
        string res="";
        sort(strs.begin(),strs.end());
        string a=strs[0],b=strs[strs.size()-1];
        for(int i=0;i<min(a.size(),b.size());i++){
            if(a[i]!=b[i]){
                return res;
            }
            res+=a[i];
        }
        return res;
    }
