string reorganizeString(string s) {
        string res="";
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        for(auto ch:s){
            mp[ch]++;
        }
        for(auto el:mp){
            pq.push({el.second,el.first});
        }
        while(pq.size()>1){
            auto el1=pq.top();
            pq.pop();
            auto el2=pq.top();
            pq.pop();
            res+=el1.second;
            res+=el2.second;
            el1.first--;
            el2.first--;
            if(el1.first>0){
                pq.push(el1);
            }
            if(el2.first>0){
                pq.push(el2);
            }
        }
        if(!pq.empty()){
            if(pq.top().first>1){
                return "";
            }else{
                res+=pq.top().second;
            }
        }
        return res;
    }
