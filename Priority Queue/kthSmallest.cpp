int kthSmallest(vector<vector<int>>& matrix, int k) {
        //using max heap
        // priority_queue<int> pq;        
        // for (const auto& row : matrix) {
        // for (int num : row) {
        //         pq.push(num);
        //         if(pq.size()>k){
        //             pq.pop();
        //         }
        //     }
        // }
        // return pq.top();

        //using minheap
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> minheap;
        int n=matrix.size();
        for(int i=0;i<min(n,k);i++){
            minheap.push({matrix[i][0],i,0});            
        }
        vector<int> m;
        for(int i=0;i<k;i++){
            m=minheap.top();
            minheap.pop();
            int col=m[2];
            int row=m[1];
            if(col+1<n){
                minheap.push({matrix[row][col+1],row,col+1});
            }
        }
        return m[0];
    }
