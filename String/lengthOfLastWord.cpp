int lengthOfLastWord(string s) {
        int count=0,f=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                f=1;
                count++;
            }
            if(s[i]==' ' && f){
                break;
            }
        }
        return count;
    }
