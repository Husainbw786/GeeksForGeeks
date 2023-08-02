//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    long long zeroend = 1;
	    long long oneend = 1;
	    long long int count = 2;
	    
	    if(n == 1)
	    {
	        return count;
	    }
	    int i = 2;
	    int mod = 1e9 + 7;
	    while(i <= n)
	    {
	        oneend = zeroend % mod;
	        zeroend = count % mod;
	        count = (oneend + zeroend) % mod;
	        i++;
	    }
	    return count;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends