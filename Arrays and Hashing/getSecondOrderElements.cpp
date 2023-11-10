vector<int> getSecondOrderElements(int n, vector<int> a) {
    int minn=INT_MAX,maxx=0,smin=INT_MAX,smax=0;
    
    for(int i=0;i<a.size();i++){
        if(a[i]>maxx){
            smax=maxx;
            maxx=a[i];
        }
        else if(a[i]>smax && a[i]!=maxx){
            smax=a[i];
        }
        if(a[i]<minn){
            smin=minn;
            minn=a[i];
        }
        else if(a[i]<smin && a[i]!=minn){
            smin=a[i];
        }
        
    }
    return {smax,smin};
}
