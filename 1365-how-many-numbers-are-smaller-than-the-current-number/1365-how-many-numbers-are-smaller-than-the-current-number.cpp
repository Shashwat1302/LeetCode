class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        int count;
        for(int i=0;i<nums.size();i++){
            count = 0;
            for(int j=0;j<nums.size();j++){
                if( nums[j]<nums[i]){
                    count++;
               }
            }
            v.push_back(count);
        }
        return v;
    }
};