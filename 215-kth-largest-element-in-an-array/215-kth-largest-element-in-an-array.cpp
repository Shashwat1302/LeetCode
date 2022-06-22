class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       int a;
        sort(nums.begin(), nums.end(), greater<>());
        for(int i=0;i<nums.size();i++){
           a = nums[k-1];
        }
        return a;
    }
};