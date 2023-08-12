//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
     int binarysearch(int target,vector<int> &a,int n)
    {
       int l=0,r=n-1;
       while(l<r)
       {
           int m=(l+r)/2;
           if(a[m]>=target)
           {
               r=m;
           }
           else if(a[m]<target)
           {
               l=m+1;
           }
       }
       return r;
    }
    int longestSubsequence(int n, int a[])
    {
       vector<int>dp;
       dp.push_back(a[0]);
       for(int i=1;i<n;i++)
       {
           if(a[i]>dp[dp.size()-1])
           {
               dp.push_back(a[i]);
           }
           else
           {
               int ind=binarysearch(a[i],dp,dp.size());
               dp[ind]=a[i];
           }
       }
       return dp.size();
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends