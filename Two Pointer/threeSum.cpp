vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> s;
        int j, k;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            j = i + 1;
            k = nums.size() - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else if (nums[i] + nums[j] + nums[k] > 0) {
                    k--;
                }
            }
        }for(auto x:s){
            res.push_back(x);
        }
        return res;
    }
