//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>st;
        vector<long long >ans(n,0);
        int i;
        for(i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                ans[i] = -1;
                st.push(arr[i]);
            }
            else
            {
                if(st.top() > arr[i])
                {
                    ans[i] = st.top();
                    st.push(arr[i]);
                }
                else
                {
                    while(!st.empty() && st.top()  <= arr[i])
                    {
                        st.pop();
                    }
                    if(st.size() == 0)
                    {
                        ans[i] = -1;
                        st.push(arr[i]);
                    }
                    else
                    {
                        ans[i] = st.top();
                        st.push(arr[i]);
                    }
                }
            }
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
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends