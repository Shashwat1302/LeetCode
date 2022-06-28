class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int ans = (nums[0]-1)*(nums[1]-1);
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
             int a = (nums[i]-1)*(nums[j]-1);
                if(ans<a){
                    ans=a;
                }
            }
           
        }
        return ans;
    }
};