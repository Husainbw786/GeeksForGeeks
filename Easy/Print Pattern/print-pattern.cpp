//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:

   int decr(vector<int>&ans,int N){
        
        if(N<=0){
          
            return N;
        }
        ans.push_back(N-5);
       return decr(ans,N-5);
    }
     void incr(vector<int>&ans,int lv,int N){
        if(lv==N){
            return ;
        }
        ans.push_back(lv+5);
        incr(ans,lv+5,N);
    }
    
    vector<int> pattern(int N){
        // code here
        vector<int>ans;
        if(N<=0){
            ans.push_back(N);
            return ans;
        }
        ans.push_back(N);
        int lv=decr(ans,N);
        incr(ans,lv,N);
        return ans;
        
        

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
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends