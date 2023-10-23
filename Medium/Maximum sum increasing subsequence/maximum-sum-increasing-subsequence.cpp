//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int i,j,max = 0;
	    int msis[n];
	    for(i=0;i<n;i++)
	    {
	        msis[i]  = arr[i];
	    }
	    for(i=1;i<n;i++)
	    {
	        for(j=0;j<i;j++)
	        {
	            if(arr[i] > arr[j] && msis[i] < arr[i] + msis[j])
	            {
	                msis[i] = msis[j] + arr[i];
	            }
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(max < msis[i])
	        {
	            max = msis[i];
	        }
	    }
	    return max;
	}  
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends