class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
        return strs[0];
        }
        string n = strs[0];
        int count = n.length();
        string ans="";
        for(int i=1;i<strs.size();i++){
        int x = 0;
        string temp = "";
        for(int j=0;j<count;j++){
        string c = strs[i];
        if(n[j]==c[j]){
        temp+=c[j];
        x++;
        }else{
        break;
        }
        }
        ans = temp;
        count = min(x,count);
        }
        return ans;
    }
};