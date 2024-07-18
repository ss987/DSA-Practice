long long maxSubarraySum(vector<int> &arr) {
        // code here...
        int sum=INT_MIN,currsum=0;
        for(int i=0;i<arr.size();i++){
            currsum+=arr[i];
            if(currsum>sum){
                sum=currsum;
            }if(currsum<0){
                currsum=0;
            }
        }
        return sum;
    }
