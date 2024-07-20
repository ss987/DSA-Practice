int nthUglyNumber(int n) {
         priority_queue<int, vector<int>, greater<int>> pq;
        unordered_set<int> s;
        pq.push(1);
        s.insert(1);
        while(n>1){
            long long top=pq.top();
            pq.pop();
            if(top*2<INT_MAX && s.find(top*2)==s.end()){
                pq.push(top*2);
                s.insert(top*2);
            }
            if(top*3<INT_MAX && s.find(top*3)==s.end()){
                pq.push(top*3);
                s.insert(top*3);
            }
            if(top*5<INT_MAX && s.find(top*5)==s.end()){
                pq.push(top*5);
                s.insert(top*5);
            }
            n--;
        }
        return pq.top();
    }
