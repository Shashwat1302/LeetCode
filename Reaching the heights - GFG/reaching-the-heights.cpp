// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    sort(a,a+n);
    int i=0;int j=n-1;int k=0;
    vector<int>ans(n,0);
    int sum=0;
    while(i<=j){
        if(k%2==0){
            ans[k]=a[j];
            sum+=ans[k];
            j--;
        }else{
            ans[k]=a[i];
            sum-=ans[k];
            i++;
        }
        k++;
    }
    if(sum==0)
        return {-1};
    else
        return ans;
}
