string removeOuterParentheses(string s) {
        string res="";
        int bal=0;
        for(auto x:s){
            if(x=='('){
                if(bal>0){
                    res+=x;                    
                }
                bal++;
            }
            else{
                bal--;
                if(bal>0){
                    res+=x;
                }
            }
        }
        return res;
    }
