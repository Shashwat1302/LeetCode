// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int countDistinctSubarray(int arr[], int n)
    {
        //code here.
        unordered_set<int> s;
        //find all ditinct element present in array
        for(int i=0;i<n;i++)
            s.insert(arr[i]);
            
            
        unordered_map<int,int> mp;
        int len=s.size();
        int st=0,count=0,end=0,ans=0;
        
        // find first window in which count of all element distinct element equal to len
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])==mp.end()){
                count++;
            }
            mp[arr[i]]++;
            end++;
            if(count==len) break;
        }
        
        // Now slide window and find each suitable window
        while(count==len){
            while(st<n&&count==len){
                ans+=n-end+1; 
                mp[arr[st]]--;
                if(mp[arr[st]]==0){
                    count--;
                    mp.erase(arr[st]);
                }
                st++;
            }
        while(end<n&&count!=len){
                if(mp.find(arr[end])==mp.end())
                    count++;
                mp[arr[end]]++;
                end++;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends