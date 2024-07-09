vector<int> leaders(int n, int arr[]) {
        // Code here
        int max=arr[n-1];
        vector<int> ans;
        ans.push_back(max);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=max){
                max=arr[i];
                ans.push_back(arr[i]);
            }
        }
        vector<int> res;
        int m=ans.size();
        for(int i=m-1;i>=0;i--){
            res.push_back(ans[i]);
        }
        return res;
    }
