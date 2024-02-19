//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        int sum = 0;
        vector<int>v;
        map<char,int>mp;
        int i;
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto x:mp)
        {
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        while(k>0)
        {
            v[v.size()-1]--;
            sort(v.begin(),v.end());
            k--;
        }
        for(i=0;i<v.size();i++)
        {
            sum += v[i]*v[i]; 
        }
        return sum;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends