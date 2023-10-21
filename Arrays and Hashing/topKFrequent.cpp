vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res={};
        unordered_map<int,int> map;
        for(auto x:nums){
            map[x]++;
        } 
        vector<pair<int,int>> v;
        for(auto x:map){
            v.push_back({x.second,x.first});
        }
        
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++){
            res.push_back(v[i].second);
        }
        return res;
    }
