//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        long long ans = 0;
        int i;
        for(i=0;i<N;i++)
        {
            ans = ans ^ Arr[i];
        }
        int setbit = 0;
        for(i=0;i<32;i++)
        {
            int curr = 1 << i;
            if((curr & ans) != 0)
            {
                setbit = curr;
                break;
            }
        }
        int first = 0,second = 0;
        for(i=0;i<N;i++)
        {
            if((Arr[i]&setbit) != 0)
            {
                first = first^Arr[i];
            }
            else
            {
                second = second^Arr[i];
            }
        }
        vector<long long >v;
        v.push_back(max(first,second));
        v.push_back(min(first,second));
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
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends