bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long temp=x,rev=0;
        while(temp>0){
            int d=temp%10;
            rev=rev*10+d;
            temp/=10;
        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
