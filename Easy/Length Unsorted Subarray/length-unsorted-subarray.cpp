//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    // code here
	    if(n == 1)
	    {
	        return {0,0};
	    }
	    int maxi = INT_MIN;
	    int mini = INT_MAX;
	    int i;
	    int x,y;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i] <= arr[i+1])
	        {
	            continue;
	        }
	        else
	        {
	            x = i;
	            break;
	        }
	    }
	    for(i=n-1;i>=0;i--)
	    {
	        if(arr[i] >= arr[i-1])
	        {
	            continue;
	        }
	        else
	        {
	            y = i;
	            break;
	        }
	    }
	    vector<int>ans;
	    while(x <= y)
	    {
	        maxi = max(arr[x],maxi);
	        mini = min(arr[x],mini);
	        x++;
	    }
	    i = 0;
	    int j = n-1;
	    while(i < n)
	    {
	        if(arr[i] <= mini)
	        {
	            i++;
	            continue;
	        }
	        else
	        {
	            ans.push_back(i);
	            break;
	        }
	    }
	    while(j >= 0)
	    {
	        if(arr[j] >= maxi)
	        {
	            j--;
	            continue;
	        }
	        else
	        {
	            ans.push_back(j);
	            break;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends