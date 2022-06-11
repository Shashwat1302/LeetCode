class Solution {
public:
    bool isAnagram(string s, string t) {
        unsigned short abc[26] = {0};
        
        if (s.size() != t.size())
            return false;
        
        for (char &c : s)
            abc[c - 'a']++;
        
        for (char &c : t)
            if (abc[c - 'a']-- == 0)
                return false;
        return true;
    }
};