int climbStairs(int n) {
        //similar to fibonacci series
        int prev1=1,prev2=1,cur;
        if (n<=1) return n;
        for(int i=2;i<=n;i++){
            cur=prev1+prev2;
            prev1=prev2;
            prev2=cur;
        }
        return cur;
    }
