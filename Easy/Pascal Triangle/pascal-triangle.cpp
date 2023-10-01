//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long

class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<long long >>v;
        int i;
         ll mod = 1e9+7;
        for(i=0;i<n;i++)
        {
            vector<long long>temp(i+1,1);
            v.push_back(temp);
        }
        for(i=2;i<n;i++)
        {
            vector<long long>prev = v[i-1];
            vector<long long>curr = v[i];
            for(int j=1;j<curr.size()-1;j++)
            {
                curr[j] = (prev[j-1] + prev[j]) % mod;
            }
            v[i] = curr;
        }
        return v[n-1];
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends