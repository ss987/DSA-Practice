int longestConsecutive(vector<int>& nums) {
        int res=0,c=1;
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]){
                continue;
            }
            if(nums[i+1]-nums[i]==1){
                c++;                
            }else{
                res=max(c,res);
                c=1;
            }

        }
        res = max(c, res);
        return res;
    }
