class Solution {
public:
    int balancedStringSplit(string s) {
      int R=0,L=0,ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R')
                R++;
            else L++;
            if(R==L)
            {
                ans++;
                R=L=0;
            }
        }
     return ans;  
    }
};