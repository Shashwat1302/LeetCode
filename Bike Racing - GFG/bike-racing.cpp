// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long n, long M, long L, long H[], long A[])
    {
        // code here
        auto isposs = [&] (long mid)
        {
            long sum=0;
            for(long i=0;i<n;i++)
            {
                long speed=H[i] + mid*A[i];
                if(speed >= L)
                sum += speed;
            }
            return sum >= M;
        };
        long low=1;
        long high=INT_MAX;
        while(low < high)
        {
            int mid=(low+high)/2;
            if(isposs(mid) == true)   high = mid;
            else    low = mid + 1;
        }
        return low;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends