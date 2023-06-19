//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        int low = 0;
        int high = N-1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(A[mid] == Key)
            {
                return true;
            }
            if(A[low] == A[mid] && A[mid] == A[high])
            {
                low++;
                high--;
                continue;
            }
            if(A[mid] >= A[low])
            {
                if(A[low] <= Key && A[mid] >= Key)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if(A[mid] <= Key && A[high] >= Key)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends