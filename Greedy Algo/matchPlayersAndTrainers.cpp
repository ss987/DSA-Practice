int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int nt=trainers.size()-1,np=players.size()-1;
        int res=0;
        while(nt>=0 && np>=0){
            if(players[np]<=trainers[nt]){
                np--;
                nt--;
                res++;
            }else{
                np--;                
            }
        }
        return res;
    }
