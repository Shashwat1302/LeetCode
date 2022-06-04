class Solution {
public:
    bool areAlmostEqual(string s1, string s2)
    {
        char c1, c2;
        int count = 0;
        for (int i = 0; i < s1.size(); ++i)
        {
            if (s1[i] != s2[i])
            {
                count++;
                if (count == 1)
                {
                    c1 = s1[i]; 
                    c2 = s2[i];
                }
                else if (s1[i] != c2 || s2[i] != c1) return false;
            }
        }
        return count == 2 || count == 0;
    }
};