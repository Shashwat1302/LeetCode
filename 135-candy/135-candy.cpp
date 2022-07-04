class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int candy = n, i=1;
        while(i<n){
            if(ratings[i] == ratings[i-1]){
                i++;
                continue;
            }
            int high = 0;
            while(ratings[i] > ratings [i-1]){
                high++;
                candy += high;
                i++;
                if(i == n) return candy;
            }
            int low = 0;
            while(i<n && ratings[i] < ratings[i-1]){
                low++;
                candy += low;
                i++;
            }
            candy -= min(high, low); 
        }
        return candy; 
    }
};