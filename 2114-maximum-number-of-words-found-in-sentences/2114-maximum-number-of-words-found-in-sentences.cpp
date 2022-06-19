class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0, length = 0, max=0;
        string s1;
        for(int i=0; i < sentences.size(); i++)
        {
            length = sentences[i].length();
            s1 = sentences[i];
            count = 0;
            for(int j=0; j < length; j++)
            {
                if(s1[j] == ' ')
                {
                    count = count + 1;
                }
            }
            if(count > max)
            {
                max = count;
            }
        }
        return max + 1;
    }
};