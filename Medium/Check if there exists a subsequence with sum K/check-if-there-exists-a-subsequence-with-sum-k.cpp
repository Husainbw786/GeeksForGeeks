//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    
    bool check(int i,int sum, vector<int>arr, int k, bool &flag)
    {
        if(i == arr.size())
        {
            if(sum == k)
            {
                flag = true;
                return true;
            }
            else
            {
                return false;
            }
        }
        if(sum > k)
        {
            return false;
        }
        sum += arr[i];
        if(check(i+1,sum,arr,k,flag) == true)
        {
            return true;
        }
        sum -= arr[i];
        if(check(i+1,sum,arr,k,flag) == true)
        {
            return true;
        }
        return false;
       
        
    }
    
    
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
        
        bool flag = false;
        check(0,0,arr,k,flag);
        if(flag)
        {
            return true;
        }
        return false;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        bool ans = obj.checkSubsequenceSum(n, arr, k);
        cout<<( ans ? "Yes" : "No")<<"\n";
    }
    return 0;
}
// } Driver Code Ends