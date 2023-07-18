//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minRemoval(int N, vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        int start = intervals[0][0];
        int end = intervals[0][1];
        int i;
        
        vector<vector<int>>res;
        for(i=1;i<n;i++)
        {
            if(end >intervals[i][0])
            {
                start = min(intervals[i][0],start);
                end = min(intervals[i][1],end);
            }
            else
            {
               res.push_back({start,end});
               start = intervals[i][0];
               end = intervals[i][1];
            }
        }
        res.push_back({start,end});
        return N - res.size();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(N, intervals) << endl;
    }
    return 0;
}
// } Driver Code Ends