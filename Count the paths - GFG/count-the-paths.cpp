// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
int ans;
   void f(int s,int d,vector<int>adj[])
   {
       if(s==d)
       {
           ans++;
           return;
       }
       for(auto it:adj[s])
       {
           f(it,d,adj);
       }
   }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    ans=0;
    vector<int>adj[n];
    for(auto it:edges)
    {
        adj[it[0]].push_back(it[1]);
    }
    f(s,d,adj);
    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends