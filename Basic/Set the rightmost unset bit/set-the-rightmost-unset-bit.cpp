//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setBit(int N)
    {
        // Write Your Code here
        int original = N;
        int count = 0;
        while(N)
        {
            if((N&1) == 0)
            {
                original = original | (1 << count);
                break;
            }
            count++;
            N = N >> 1;
        }
        return original;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends