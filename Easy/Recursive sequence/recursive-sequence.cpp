//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

#define mod 1000000007
class Solution{
public:
    long long solve(int n){
        
        if(n==1)
        return 1;
        
        int cnt= (n*(n-1))/2;
        long long prod=1;
        cnt++;
        for(int i=0;i<n;i++){
            prod=(prod*cnt)% mod;
            cnt++;
        }
        return (solve(n-1) + prod)% mod;
    }
    long long sequence(int n){
        // code here
        return solve(n);
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends