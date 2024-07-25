int characterReplacement(string s, int k) {
        int res=0,n=s.size();
        for(char c='A';c<='Z';c++){
            int i=0,j=0,replaced=0;
            while(j<n){
                if(s[j]==c){
                    j++;
                }else if(replaced<k){
                    replaced++;
                    j++;
                }else if(s[i]==c){
                    i++;
                }else{
                    i++;
                    replaced--;
                }
                res=max(res,j-i);
            }
        }
        return res;
    }
