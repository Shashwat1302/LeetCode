class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        double prod;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int a=nums[n-1], b=nums[n-2], c=nums[0], d=nums[1];
        for(int i=0;i<n;i++){
             prod = (nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
        }
        return prod;
    }
};