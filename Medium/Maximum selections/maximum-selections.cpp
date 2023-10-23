//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

\

class Solution{
public:
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
        int n = ranges.size();
        sort(ranges.begin(),ranges.end());
        int start = ranges[0][0];
        int end = ranges[0][1];
        int i;
        vector<vector<int>>ans;
        for(i=1;i<n;i++)
        {
            if(end > ranges[i][0])
            {
                end = min(ranges[i][1],end);
            }
            else
            {
                ans.push_back({start,end});
                start = ranges[i][0];
                end = ranges[i][1];
            }
        }
        ans.push_back({start,end});
        return ans.size();
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}


// } Driver Code Ends