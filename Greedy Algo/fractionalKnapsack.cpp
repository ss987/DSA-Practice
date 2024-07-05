bool static comp(Item a,Item b){
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Your code here
        sort(arr,arr+n,comp);
        int curw=0;
        double tval=0.0;
        for(int i=0;i<n;i++){
            if(curw+arr[i].weight<=w){
                curw+=arr[i].weight;
                tval+=arr[i].value;
            }else{
                int remain=w-curw;
                tval+=((double)arr[i].value/(double)arr[i].weight)*(double)remain;
                break;
            }
        }
        return tval;
    }
