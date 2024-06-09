int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int> summap;
        int m=0,i=0;
        long long sum=0;
        for(i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                m=i+1;
            }
             if(summap.find(sum-K)!=summap.end()){
                m=max(m,i-summap[sum-K]);
            }
             if(summap.find(sum)==summap.end()){
                summap[sum]=i;
            }
        }
        
        return m; 
    } 
