void backtrack(vector<int>& candidates, int target, int i,vector<int>& curr,vector<vector<int>>& res){
        if(target==0){
            res.push_back(curr);
            return;
        }
        for(int j=i;j<candidates.size();j++){
            if(candidates[j]<=target){
                curr.push_back(candidates[j]);
                backtrack(candidates,target-candidates[j],j,curr,res);
                curr.pop_back();
            }
            
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(candidates,target,0,curr,res);
        return res;
    }
