//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        // Code here
        vector<int>arr(N);
        vector<int>dep(N);
        int i,j;
        for(i=0;i<N;i++)
        {
           arr[i] = lines[i][0];
           dep[i] = lines[i][1];
        }
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        i = 1;
        j = 0;
        int ans = 1;                  
        int count = 1;
        while(i < N && j < N)
        {
            if(arr[i] <= dep[j])
            {
                count++;
                i++;
            }
            else
            {
                count--;
                j++;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends