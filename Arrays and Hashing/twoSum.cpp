vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(map.find(rem)!=map.end() && map[rem]!=i){ //2nd condition makes sure both indices are distinct
                return{map[rem],i};
            }
        }
        return {};
    }
