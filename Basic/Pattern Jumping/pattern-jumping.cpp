//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string canJump(long long N) {
        // code here
        long long int n = 1;
        while( N > n)
        {
            n = n+n;
        }
        if(N == n)
        {
            return "True";
        }
        return "False";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.canJump(N) << endl;
    }
    return 0;
}
// } Driver Code Ends