//Level 1
int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
        {
            return 0;                        //sliding window algo can be used
        }

        int minprice=prices[0];

        int pro=0;
        for (int i=0;i<prices.size();i++){
            pro=max(pro,prices[i]-minprice);
            minprice=min(minprice,prices[i]);
        }
        return(pro);
    }
//Level 2

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
