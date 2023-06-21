//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:


    bool can_place_cows(vector<int>stalls,int mid,int n,int k)
    {
        int i;
        int temp = stalls[0];
        int count = 1;
        for(i=0;i<n;i++)
        {
            if(stalls[i] - temp >= mid)
            {
                temp = stalls[i];
                count++;
            }
            if(count == k)
            {
                return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        int i,j;
        sort(stalls.begin(),stalls.end());
        int high = stalls[n-1] - stalls[0];
        int low = 1;
        int ans = -1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(can_place_cows(stalls,mid,n,k))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends