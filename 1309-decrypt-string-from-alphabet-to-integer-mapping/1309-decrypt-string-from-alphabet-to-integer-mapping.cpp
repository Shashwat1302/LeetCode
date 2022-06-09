class Solution {
public:
   string freqAlphabets(string s) {
        int l=s.size();
        vector<char> arr;
        int i=0;
        while(i<l)
        {
            if(s[i]=='1' && s[i+1]>='0' && s[i+1] <='9' && s[i+2]=='#')
            {
                s[i] = s[i+1] + 58;
                arr.push_back(s[i]);
                i+=3;
            }
            else if(s[i]=='2' && s[i+1]>='0' && s[i+1] <='6' && s[i+2]=='#')
            {
                s[i] = s[i+1] + 68;
                arr.push_back(s[i]);
                i+=3;
            }
            else
            {
                s[i] = s[i] + 48;
                arr.push_back(s[i]);
                i++;
            }
        }
        string str(arr.begin(),arr.end());
        return str;
        
    }
};