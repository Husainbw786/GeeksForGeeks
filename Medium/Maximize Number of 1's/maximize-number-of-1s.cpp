//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int ans = 0;
        int count = 0;
        int j = 0;
        int i = 0;
        while(j < n)
        {
            if(arr[j] == 0)
            {
                m--;
            }
            if(m >= 0)
            {
                ans = max(ans,j-i+1);
            }
            else if(m < 0)
            {
                while(m < 0)
                {
                    if(arr[i] == 0)
                    {
                        m++;
                    }
                    i++;
                }
            }
            if(m >= 0)
            {
                ans = max(ans,j-i+1);
            }
            
            j++;
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends