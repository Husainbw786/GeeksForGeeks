//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int arr1[n];
        int i;
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
                return arr[0];
        }
        if(n == 2)
        {
            max(arr[0],arr[1]);
        }
        arr1[0] = arr[0];
        arr1[1] = max(arr[0],arr[1]);
        
        for(i=2;i<n;i++)
        {
            arr1[i] = max(arr1[i-2] + arr[i],arr1[i-1]);
        }
        return arr1[n-1];
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends