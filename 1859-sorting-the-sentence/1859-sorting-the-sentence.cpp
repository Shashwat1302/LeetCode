class Solution {
public:
    string sortSentence(string s) {
        string arr[200]={""},res="";int cnt=0;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=' ' and !(s[i]>='0' and s[i]<='9'))
                res+=s[i];
            else if(s[i]>='0' and s[i]<='9')
            {cnt++;
             arr[s[i]-'0'] = res;
              res="";
            }
        }
        res="";
        for(int i=0; i<cnt; i++)
        {
            if(arr[i]!="")
            {
                res+=arr[i];
                res+=" ";
            }
                
        }
       res+=arr[cnt];
         
        return res;
    }
};