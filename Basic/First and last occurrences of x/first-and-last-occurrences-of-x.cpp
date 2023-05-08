// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<long long>v;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            v.push_back(i);
        }
    }
    vector<int>v2;
    if(v.size()==0)
    {
        v2.push_back(-1);
        v2.push_back(-1);
    }
    else
    {
    v2.push_back(v[0]);
    v2.push_back(v[v.size()-1]);
    }
    return v2;
    
}

// { Driver Code Starts.

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
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends