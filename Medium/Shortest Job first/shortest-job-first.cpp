//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        sort(bt.begin(),bt.end());
        int n = bt.size();
        int i;
        vector<int>completion;
        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += bt[i];
            completion.push_back(sum);
        }
        vector<int>wait;
        int average = 0;
        for(i=0;i<n;i++)
        {
            wait.push_back(completion[i] - bt[i]);
            average += wait[i]; 
        }
        return average/n;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> bt(n), p(n);
        for (int i = 0; i < n; i++) {
            cin >> bt[i];
        }
        Solution obj;
        long long ans = obj.solve(bt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends