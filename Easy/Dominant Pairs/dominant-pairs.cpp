//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        int i;
        int x = n/2;
        sort(arr.begin(),arr.begin()+x);
        sort(arr.begin()+x,arr.end());
        int count = 0;
        i = 0;
        int j = x;
        while(i < n/2 && j < n)
        {
            if(arr[i] >= 5*arr[j])
            {
                count += x - i;
                j++;
            }
            else
            {
                i++;
            }
        }
        return count;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends