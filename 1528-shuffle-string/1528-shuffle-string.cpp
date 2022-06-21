class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      vector<string>ans(indices.size());
        string s2;
        for(int i=0;i<indices.size();i++){
        ans[indices[i]]=s[i];
        }
        s2 = accumulate(begin(ans), end(ans), s2); 
       return s2;
    }
};