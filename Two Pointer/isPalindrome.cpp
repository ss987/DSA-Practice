bool isPalindrome(string str) {
        
        int i=0,j=str.size()-1;
        
        while(i<j){
            if(!isalnum(str[i])){
                i++;
                continue;
            }
            if(!isalnum(str[j])){
                j--;
                continue;

            }
            if(tolower(str[i])!=tolower(str[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
