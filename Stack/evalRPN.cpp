int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto x:tokens){
            if(x != "+" && x != "-" && x != "*" && x != "/"){
                st.push(stoi(x));
            }else{
                int b = st.top(); 
                st.pop();
                int a = st.top(); 
                st.pop();
                if(x=="+"){
                    st.push(a+b);
                }else if(x=="-"){
                    st.push(a-b);
                }else if(x=="*"){
                    st.push(a*b);
                }else if(x=="/"){
                    st.push(a/b);
                }
            }
        }
        return st.top();
    }
