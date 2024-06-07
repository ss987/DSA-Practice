int print2largest(int arr[], int n) {
	    
	    int m = -1, s = -1;
	    for(int i = 0; i < n; i++) {
	        int x = arr[i];
	        if(x > m) {
	            s = m;
	            m = x;
	        }
	        else if(x > s && x < m) {
	            s = x;
	        }
	    }
	    return s;
	}
