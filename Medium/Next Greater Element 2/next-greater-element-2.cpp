//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& nums) {
        // code here
        
        vector<int>v(n,-1);
        stack<int>st;
        
        int i;
        for(i=2*n-1;i>=0;i--)
        {
           while(!st.empty() && (nums[i%n] >= st.top()))
           {
               st.pop();
           }
           if(!st.empty() && i < n)
            {
                v[i] = st.top();
            }
            
           st.push(nums[i%n]); 
        }
        return v;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends