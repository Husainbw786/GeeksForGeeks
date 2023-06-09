//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int nums[], int n, int k)
    {
        unordered_map<int,int> mp;  
        int sum=0;
        int ans=0;
        mp[sum] = 1;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            int find = sum - k;
            if(mp.find(find) != mp.end())
            {
                ans += mp[find];
            }
            mp[sum]++;
        }
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
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends