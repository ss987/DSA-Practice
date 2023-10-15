    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int element:nums){
            freq[element]++;
        }
        if(freq.size()<nums.size()){
            return true;
        }
        else{
            return false;
        }
        
    }
