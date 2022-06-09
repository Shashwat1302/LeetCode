class Solution {
public:
    unordered_map<char,int> mp;
    
    bool helper(string &s1,string &s2){
        int n1 = s1.length(),n2 = s2.length();
        for(int i=0;i<min(n1,n2);i++){
            if(mp[s1[i]]>mp[s2[i]])
                return false;
            if(mp[s1[i]]<mp[s2[i]])
                return true;
        }
        return n1<=n2;
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0;i<26;i++){
            mp[order[i]] = i;
        }
        
        int n = words.size();
        for(int i=n-1;i>0;i--){
            if(!helper(words[i-1],words[i]))
                return false;
        }
        return true;
    }
};