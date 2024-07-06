int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    // Your code goes here
    //works only if sum of 2 denomination is less than other. Fails otherwise
	    int c=0;
	    for(int i=0;i<M;i++){
	        while(V>=coins[i]){
	            V-=coins[i];
	            c++;
	        }
	    }
	    if (V > 0) {
            return -1;
        }
	    return c;
	} 
