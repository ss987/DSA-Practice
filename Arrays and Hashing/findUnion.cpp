vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        vector<int> res;
        int i=0,j=0;
        while(i<n && j<m){
            while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
                i++;
            while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
                j++;
            if(arr1[i]<arr2[j]){
                res.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i]>arr2[j]){
                res.push_back(arr2[j]);
                j++;
            }
            else{
                res.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        while(i<n ){
            while(i+1<n && arr1[i]== arr1[i+1]){
                i++;
            }
            res.push_back(arr1[i++]);
        }
        while(j<m ){
            while(j+1<m && arr2[j]== arr2[j+1]){
                j++;
            }
            res.push_back(arr2[j++]);
        }
        //return vector with correct order of elements
        return res;
    }
