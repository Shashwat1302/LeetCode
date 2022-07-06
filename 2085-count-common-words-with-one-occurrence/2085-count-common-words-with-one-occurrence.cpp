class Solution {
public:
   int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;
        
        for(string s : words1)
            mp1[s]++;
        
        for(string s : words2)
            mp2[s]++;
        
        int ans = 0;
        for(auto p : mp1){
            if(p.second == 1 and mp2[p.first] == 1)
                ans++;
        }
        return ans;
    }
};