//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){

       vector<int>v = arr;
       unordered_map<int,int>mp;
       sort(v.begin(),v.end());
       mp[v[0]] = 1;
       int count = 2;
        for(int i=1;i<N;i++)
        {
            if(v[i] == v[i-1])
            {
                continue;
            }
            mp[v[i]] = count;
            count++;
        }
        vector<int>ans;
        for(int i=0;i<N;i++)
        {
            int rank = mp[arr[i]];
            ans.push_back(rank);
        }
        return ans;
        
         
    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends