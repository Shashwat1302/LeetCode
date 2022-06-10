// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int a[], int b[], int t, int n) {
        // code here
        if(t==0)
            return 0;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({b[i],a[i]});
        }
        int res=0; 
        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--)
        {
            if(t>=v[i].second)
            {
                res+=v[i].first*v[i].second;
                t-=v[i].second;
            }
            else
            {
                res+=v[i].first*t;
                break;
            }    
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends