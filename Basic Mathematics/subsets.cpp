vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        
        int n=nums.size();
        int size=pow(2,n);
        for(int i=0;i<size;i++){
            vector<int> path;
            for(int j=0;j<n;j++){
                if(i>>j&1){
                    path.push_back(nums[j]);
                }
            }
            res.push_back(path);
        }
        return res;
    }
