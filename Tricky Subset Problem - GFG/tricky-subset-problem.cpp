// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isPossible(long long S, long long N, long long X, long long A[])
    {
        // code here
        vector<long long> vec;
        vec.push_back(S);
        long long sum=S;
        for(int i=1;i<=N && sum<=X;i++){
            vec.push_back(sum+A[i-1]);
            sum+=vec[i];
    }
    N=vec.size();
        long long itr=lower_bound(vec.begin(),vec.end(),X)-vec.begin();
        for(int i=itr;i>=0;i--){
            if(vec[i]<=X){
                X-=vec[i];
            }
            if(X==0){
                return 1;
            }
        }
        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long S, N, X;
        cin>>S>>N>>X;
        long long A[N];
        for(long long i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        if(ob.isPossible(S, N, X, A))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}  // } Driver Code Ends