class Solution {
public:
    int lengthOfLastWord(string s) {
       int c=0,pos=0;

    for(int i=s.size()-1;i>=0;i--){
        if(s[i]!=' '){
            pos=i;
            break;
        }
    }
     for(int i=pos;i>=0;i--){
        if(s[i]==' '){
            break;
        }
         else c++;
    }
    return c;
    }
};