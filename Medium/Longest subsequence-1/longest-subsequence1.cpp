//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
   int solve(int ind, int prev, vector<int>& a, int n) {
        if(ind>=n) return 0;
        
        int notTake = solve(ind+1,prev,a,n);
        int take = 0;
        if(prev==-1 || abs(a[ind]-a[prev]) == 1) {
            take = 1 + solve(ind+1,ind,a,n);
        }
        return max(take,notTake);
    }
    int longestSubseq(int n, vector<int> &a) {
        return solve(0,-1,a,n);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> a(n);
        Array::input(a, n);

        Solution obj;
        int res = obj.longestSubseq(n, a);

        cout << res << endl;
    }
}

// } Driver Code Ends