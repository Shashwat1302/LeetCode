class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        vector<int>t(nums.size(),0);
        t[0]=nums[0];
        priority_queue<pair<int,int>>q;
        q.push({nums[0],0});
        for(int i=1;i<nums.size();i++){
            while(q.top().second<i-k)
            q.pop();
            t[i]=nums[i]+q.top().first;
            q.push({t[i],i});
        }
        return t[nums.size()-1];
    }
};