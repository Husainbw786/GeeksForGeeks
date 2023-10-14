//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int minDiff(int arr[], int N, int K)
    {
        int i=0,j;
        sort(arr,arr+N);
        int mini = INT_MAX;
        for(j=0;j<N;j++)
        {
            if(j-i+1 == K)
            {
                mini = min(mini,arr[j] - arr[i]);
                i++;
            }
        }
        return mini;
    }
};

//{ Driver Code Starts.

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution obj;
		cout<<obj.minDiff(a,n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends