//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos,neg,v;
	    int i;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i] < 0)
	        {
	            neg.push_back(arr[i]);
	        }
	        else
	        {
	            pos.push_back(arr[i]);
	        }
	    }
	    i = 0;
	    int j =0;
	    int k = 0;
	    while(i < pos.size() || j < neg.size())
	    {
	        if(i < pos.size())
	        {
	            arr[k] = pos[i];
	            i++;
	            k++;
	        }
	        if(j < neg.size())
	        {
	            arr[k] = neg[j];
	            j++;
	            k++;
	        }
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends