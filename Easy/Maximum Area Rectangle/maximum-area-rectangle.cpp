//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int calculate_Area(vector<pair<int, int>>&v, int N)
    {
        // Your code goes here
        int maxi = 0;
        for(int i=0;i<N;i++)
        {
            int x = v[i].first;
            int y = v[i].second;
            maxi = max(maxi,x*y);
        }
        return maxi;
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
        vector<pair<int,int>>rect;
        for(int i = 0 ; i < n; i++){
            int a, b;
            cin >> a >> b;
            rect.push_back({a, b});
        }
        Solution ob;
        cout << ob.calculate_Area(rect, n) << endl;
    }
	return 0;
}

// } Driver Code Ends