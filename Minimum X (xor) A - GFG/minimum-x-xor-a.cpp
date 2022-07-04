// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int k=0;
        while(b)
        {
            if(b&1)
                k++;
            b=b>>1;
        }
        string s;
        for(int i=0;i<32;i++)
        {
            if(a&1)
                s.push_back('1');
            else
                s.push_back('0');
            a=a>>1;
        }
        reverse(s.begin(),s.end());
        string ans;
        for(int i=0;i<32;i++)
        {
            if(s[i]=='1' && k)
            {
                ans.push_back('1');
                k--;
            }
            else
                ans.push_back('0');
        }
        int i=31;
        while(k)
        {
            if(ans[i]=='0')
            {
                ans[i]='1';
                k--;
            }
            i--;    
        }
        int res=0;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<32;i++)
        {
            if(ans[i]=='1')
                res+=pow(2,i);
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends