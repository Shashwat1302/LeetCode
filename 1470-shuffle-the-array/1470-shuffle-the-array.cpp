class Solution {
public:
        vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> finalNums;
        for(int i = 0; i < n; i++){
            finalNums.push_back(nums[i]);
            finalNums.push_back(nums[i+n]);
        }
        return finalNums;
    }
};