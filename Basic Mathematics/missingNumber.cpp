int missingNumber(vector<int>& nums) {
        int arraySum=0;
        for(int x:nums){
            arraySum+=x;
        }
        return ((nums.size()+1)*(nums.size()))/2-arraySum;
    }
