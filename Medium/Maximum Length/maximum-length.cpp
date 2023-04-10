//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
       int maxi = max(a,max(b,c));
       int gap = maxi / 2;
       if(maxi == a)
       {
           if(gap <= b+c)
           {
               return a+b+c;
           }
       }
       if(maxi == b)
       {
           if(gap <= a+c)
           {
               return a+b+c;
           }
       }
       if(maxi == c)
       {
           if(gap <= b+a)
           {
               return a+b+c;
           }
       }
       return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends