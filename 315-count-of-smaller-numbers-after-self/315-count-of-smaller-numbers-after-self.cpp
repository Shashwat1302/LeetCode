class Solution {
public:
    
        vector <pair<int, int> > arr;
        void merge(int l, int mid, int r, vector <int>&ans, vector <pair<int, int> > &nums) {
        int a = mid - l + 1;
        int b = r - mid;
        vector <pair <int, int> > x(a);
        vector <pair <int, int> > y(b);
        for(int i = 0 ;  i < a ; i ++) {
            x[i] = nums[i + l];
        }
       for(int j = 0 ; j < b ; j ++) {
            y[j] = nums[j + mid+1];
        }
       int i = 0, j = 0 ;
       int k = l;
        while(i < a && j < b) {
           if(x[i].second > y[j].second) {
                nums[k] = x[i];
                ans[x[i].first] += (b - j ); 
                i++;
                k++;
            }
            else {
                nums[k] = y[j];
                k++;
                j++;
            }
        }
        while(i < a)
            nums[k++] = x[i++];
        
        while(j < b)
            nums[k++] = y[j++];
        return;
    }
    void helper(int l, int r, vector <int> &ans, vector <pair<int, int> > &nums) {
        
        if( l < r) {
            
            int mid = l + (r - l )/2;
            helper(l, mid, ans, nums);
            helper(mid + 1, r, ans, nums);
            merge(l , mid, r, ans, nums);
            
        }
    }
    vector<int> countSmaller(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++)
            arr.push_back({i, nums[i]});
        vector <int> ans(nums.size());
        helper(0, nums.size()-1, ans,  arr);
        
        return ans;
    }
};