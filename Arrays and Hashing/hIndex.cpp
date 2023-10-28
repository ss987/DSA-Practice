int hIndex(vector<int>& citations) {
        int hc=0;
        sort(citations.begin(), citations.end(), greater<int>());
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=i+1){
                hc=i+1;
            }
            else{
                break;
            }
        }
        return hc;
    }
