//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to find length of longest bitonic
	// subarray
	int bitonic(vector<int> arr, int n) {
	    // code here
	    int start = 0;
	    int startnext = 0;
	    int i = 0;
	    int maxlength = 1;
	    while(i < n-1)
	    {
    	    while(i < n-1 && arr[i] <= arr[i+1])
    	    {
    	      i++;
    	    }
    	    while(i < n-1 && arr[i] >= arr[i+1])
    	    {
    	        if(i < n-1 && arr[i] > arr[i+1])
    	        {
    	          startnext = i+1;  
    	        }
    	        i++;
    	    }
    	    maxlength = max(maxlength,i-start+1);
    	    start = startnext;
	    }
	    return maxlength;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.bitonic(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends