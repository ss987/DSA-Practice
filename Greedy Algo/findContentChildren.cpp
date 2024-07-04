int findContentChildren(vector<int>& g, vector<int>& s) {
        int res=0,i=0,j=0;
        int gn=g.size(),sn=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<gn && j<sn){
            if(g[i]<=s[j]){
                res++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return res;
    }
