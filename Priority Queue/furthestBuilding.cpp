int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int c=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=1;i<heights.size();i++){
            int diff=heights[i]-heights[i-1];
            if(diff>0){
                pq.push(diff);
                if(pq.size()>ladders){
                    int smallest=pq.top();
                    pq.pop();
                    bricks-=smallest;
                    if(bricks<0){
                        return i-1;
                    }
                }
            }   
        }
        return heights.size()-1;
    }
