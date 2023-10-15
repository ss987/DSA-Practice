    int maxProfit(vector<int>& prices) {
        int i=0,sum=0,j=1;
        while(j<prices.size()){
            if(prices[i]<prices[j]){
            
                sum+=prices[j]-prices[i];
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return sum;
    }
