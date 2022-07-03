class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int pos=0,neg=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]-nums[i-1]>0)
                 pos=neg+1;
            
            if( nums[i]-nums[i-1]<0)
                neg=pos+1;
        }
        return max(neg,pos)+1;
    }
};