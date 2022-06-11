class Solution {
public:
    static bool mycmp(pair<int,int> a, pair<int,int> b){
       if(a.second==b.second)
           return a.first<b.first;
       return a.second<b.second;
    }
    int setbits(int n){
        int cnt=0;
        while(n>0){
            n = (n & (n-1));
            cnt++;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
         vector<pair<int,int>> map;
         vector<int> ans;
        for(int i=0; i<arr.size(); i++){
             int x=setbits(arr[i]);
             map.push_back({arr[i],x});
        }
        sort(map.begin(),map.end(),mycmp);
        for(auto it:map)
            ans.push_back(it.first);
        return ans;
        
    }
};