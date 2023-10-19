vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> strMap;
        
        for(auto x:strs){
            string word=x;
            sort(word.begin(),word.end());
            strMap[word].push_back(x);
        }
        vector<vector<string>> res;
        for(auto x:strMap){
            res.push_back(x.second);
        }
        return res;
    }
