class Solution {
public:
    int minPartitions(string n) {
       char mx = '0';
        for(auto x: n){
            mx = max(mx,x);
            if(mx=='9'){
                break;
            }
        }
        return mx-'0';
    }
};