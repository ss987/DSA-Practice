void generate(int n,int open,int close,string str,vector<string> &res){
        if(n==open && n==close){
            res.push_back(str);
        }if(open<n){
            generate(n,open+1,close,str+"(",res);
        }if(close<open){
            generate(n,open,close+1,str+")",res);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(n,0,0,"",res);
        return res;
    }
