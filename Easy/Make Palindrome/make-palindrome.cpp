//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        unordered_map<string,int>mp;
        int i;
        for(i=0;i<n;i++)
        {
            string x = arr[i];
            reverse(x.begin(),x.end());
            if(mp.find(x) != mp.end())
            {
                mp.erase(x);
            }
            else
            {
                mp[arr[i]] = 1;
            }
        }
        
        if(mp.size() == 0)
        {
            return true;
        }
        if(mp.size() == 1)
        {
            for(auto x : mp)
            {
                string a = x.first;
                reverse(a.begin(),a.end());
                if(a == x.first)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends