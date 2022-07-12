class Solution {
public:
     int n;
    vector <int> matchsticks;
    
    int target = 0;
    bool generate(int level,int a,int b,int c, int d){
        if(level == n){
            return a == target && b == target && c == target && d == target; 
        }
        if(a+matchsticks[level]<=target){
           if(generate(level+1,a+matchsticks[level],b,c,d)) return true;
        }
        if(b+matchsticks[level]<=target){
            if(generate(level+1,a,b+matchsticks[level],c,d)) return true;
        }
        if(c+matchsticks[level]<=target){
           if(generate(level+1,a,b,c+matchsticks[level],d)) return true;
        }
        if(d+matchsticks[level]<=target){
           if(generate(level+1,a,b,c,d+matchsticks[level])) return true;
        }
        return false;
    }
    bool makesquare(vector<int>& _matchsticks) {
         matchsticks = _matchsticks;
        n = matchsticks.size();
        int sm=0;
        for(int i=0;i<n;i++) sm+=matchsticks[i];
        if(sm%4 !=0) return false;
        target = sm/4;
        sort(matchsticks.rbegin(),matchsticks.rend());
        return generate(0,0,0,0,0);
    }
};