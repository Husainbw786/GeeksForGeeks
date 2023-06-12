//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& interval) {
         // Code here
         sort(interval.begin(),interval.end());
         vector<vector<int>>ans;
         int i;
         int n = interval.size();
         int start = interval[0][0];
         int end = interval[0][1];
         for(i=1;i<n;i++)
         {
             if(end >= interval[i][0])
             {
                 end = max(interval[i][1],end);
             }
             else
             {
                 ans.push_back({start,end});
                 start = interval[i][0];
                 end = interval[i][1];
             }
             
         }
         
         ans.push_back({start,end});
         
         return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends