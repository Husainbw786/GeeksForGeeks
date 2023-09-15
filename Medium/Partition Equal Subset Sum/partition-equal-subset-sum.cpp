//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

bool subset(int arr[],int sum,int n)
{
    bool dp[n+1][sum+1];
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=sum;j++)
        {
            if(i == 0)
            {
                dp[i][j] = false;
            }
            if(j == 0)
            {
                dp[i][j] = true;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(arr[i-1] <= j)
            {
               dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        int i;
        for(i=0;i<N;i++)
        {
            sum = sum + arr[i];
        }
        
        if(sum % 2 != 0)
        {
            return false;
        }
        sum = sum/2;
        return subset(arr,sum,N);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends