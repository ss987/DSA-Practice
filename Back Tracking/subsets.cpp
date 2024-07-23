void backtrack(vector<int>& nums,int i,vector<int>& path,vector<vector<int>>& res){
        res.push_back(path);
        for(int j=i;j<nums.size();j++){
            path.push_back(nums[j]);
            backtrack(nums,j+1,path,res);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        backtrack(nums,0,path,res);
        return res;
    }
