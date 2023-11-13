int findMaxConsecutiveOnes(vector<int>& nums) {
    
        int res=0,c=0;
        for(auto x:nums){
            if(x==1){
                c++;
                res=max(c,res);
            }
            else{
                
                c=0;
            }
        }
        return res;
    
    }
