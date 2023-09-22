//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int first_idx(int arr[], int n ,int x)
  {
    int low = 0;
    int high = n-1;
    int first = -1;
    int last = -1;
    while(low <= high)
    {
        int mid = low + (high- low)/2;
        if(arr[mid] == x)
        {
            first = mid;
            high = mid-1;
        }
        else if(arr[mid] > x)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return first;
  }
  
   int last_idx(int arr[], int n ,int x)
  {
    int low = 0;
    int high = n-1;
    int first = -1;
    int last = -1;
    while(low <= high)
    {
        int mid = low + (high- low)/2;
        if(arr[mid] == x)
        {
            first = mid;
            low = mid + 1;
        }
        else if(arr[mid] > x)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return first;
  }




vector<int> find(int arr[], int n , int x )
{
    // code here
    
    int first = first_idx(arr,n,x);
    vector<int>v;
    if(first == -1)
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    int last = last_idx(arr,n,x);
    v.push_back(first);
    v.push_back(last);
    return v;
}

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends