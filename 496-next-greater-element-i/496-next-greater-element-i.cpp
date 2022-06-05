class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++)
        { 
           int temp=1;
            for(int j=0;j<nums2.size();j++)
            {
                 
                if(nums1[i]==nums2[j])
                {
                    if(j==nums2.size()-1)
                    {
                        ans.push_back(-1);
                        break;
                    }
                    for(int k=j+1;k<nums2.size();k++)
                    {
                        if(nums1[i]<nums2[k])
                        {
                            ans.push_back(nums2[k]);
                            temp=0;
                            break;
                        }
                    }
                    if(temp)
                    {
                        ans.push_back(-1);
                        break;
                    }
                }
                
                
            }
        }
        
return ans;
    }
};