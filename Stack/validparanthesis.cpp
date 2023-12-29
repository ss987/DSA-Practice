class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        if (s.size()==0) return false;
        if(s[0]==')' || s[0]==']' || s[0]=='}') return false;
        for(auto x:s){
            if(x=='(' || x=='[' || x=='{'){
                stk.push(x);
            }
            else if(stk.empty() && (x==')' || x==']' || x=='}'))
            return false;
             else 
            {
                if(stk.top()=='(' && x==')') stk.pop(); 
                else if(stk.top()=='[' && x==']') stk.pop(); 
                else if(stk.top()=='{' && x=='}') stk.pop(); 
                else return false;
            }
        }
        if(!stk.empty()) return false;
        return true;
    }
};
