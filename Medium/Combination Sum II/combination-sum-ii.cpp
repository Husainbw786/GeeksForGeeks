//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    void solve(int i, int k, vector<int>arr, vector<int>temp, vector<vector<int>>&ans)
    {
          if(k == 0)
            {
                ans.push_back(temp);
                return;
            }
            if(i == arr.size())
            {
                return;
            }
            if(arr[i] <= k)
            {
              temp.push_back(arr[i]);
              solve(i+1,k-arr[i],arr,temp,ans);
              temp.pop_back();  
            }
            while(i+1 < arr.size() && arr[i] == arr[i+1])
            {
                i++;
            }
            solve(i+1,k,arr,temp,ans);
        
    }

    vector<vector<int>> CombinationSum2(vector<int> candidates,int n,int target)
    {
        //code here
         sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,target,candidates,temp,ans);

        
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends