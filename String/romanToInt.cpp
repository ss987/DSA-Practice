int romanToInt(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            switch(ch){
                case 'M':
                res+=1000;
                break;
                case 'D':
                res+=500;
                break;
                case 'C':
                {
                    if(s[i+1]=='D'){
                        res+=400;
                        i++;
                    }
                    else if(s[i+1]=='M'){
                        res+=900;
                        i++;
                    }
                    else{
                        res+=100;
                    }
                    break;
                }
                case 'L':
                res+=50;
                break;
                case 'X':
                {
                    if(s[i+1]=='L'){
                        res+=40;
                        i++;
                    }
                    else if(s[i+1]=='C'){
                        res+=90;
                        i++;
                    }
                    else{
                        res+=10;
                    }
                    break;
                }
               
                case 'V':
                res+=5;
                break;
                case 'I':{
                    if(s[i+1]=='V'){
                        res+=4;
                        i++;
                    }
                    else if(s[i+1]=='X'){
                        res+=9;
                        i++;
                    }
                    else{
                        res+=1;
                    }
                    break;
                }
                
                default:
                break;
            }
        }
        return res;
    }
