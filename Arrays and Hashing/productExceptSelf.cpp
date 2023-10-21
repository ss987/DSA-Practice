 vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(size(nums),1);
        for(int i=1;i<nums.size();i++){
            res[i]=res[i-1]*nums[i-1];
        }
        int pro=1;
        for(int i=nums.size()-1;i>=0;i--){
            res[i]*=pro;
            pro*=nums[i];
        }
        return res;

    }
