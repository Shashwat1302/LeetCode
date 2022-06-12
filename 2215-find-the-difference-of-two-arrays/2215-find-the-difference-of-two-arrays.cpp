class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
	vector<vector<int>>ans(2); 
	
	for(auto it:nums1)
	{
		s1.insert(it);
	} 
	
	 for(auto it:nums2)
	{
		s2.insert(it);
	}
	
	for(auto it:s1)
	{
		if(s2.count(it)==0) //checks  the presence of element in  set s2 

		ans[0].push_back(it); //if the element is not present in s2 then push_back to ans vector
	}
	
	for(auto it:s2)
	{
		if(s1.count(it)==0)   //checks  the presence of element in  set s1

		ans[1].push_back(it); //if the element is not present in s1 then push_back to ans vector
	}

	return ans;
    }
};