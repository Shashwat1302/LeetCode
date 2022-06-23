// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalWays(int n)
	{
	    // Code here
	    if(n==1)
	   {
	       return 4;
	   }
	   if(n==2)
	   {
	       return 9;
	   }
	   long long first=2,second=3,current,mod=1e9+7,ans;
	   for(int i=3;i<=n;i++)
	   {
	       current=(first+second)%mod;
	       first=second%mod;
	       second=current%mod;
	   }
	   ans=((current%mod)*(current%mod))%mod;
	   return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends