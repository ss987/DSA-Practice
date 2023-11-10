int largestElement(vector<int> &arr, int n) {
    
    int largest=0;
    for(int i=0;i<arr.size();i++){
        largest=max(largest,arr[i]);
    }
    return largest;
}
