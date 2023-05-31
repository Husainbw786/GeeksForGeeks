//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        unordered_map<int,int>mp;
        int i;
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int ans;
        int mini = INT_MAX;
        for(auto x : mp)
        {
            if(mini > x.second)
            {
                mini = x.second;
                ans = x.first;
            }
            if(mini == x.second)
            {
                ans = max(x.first,ans);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends